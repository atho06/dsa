#include <stdio.h>
#include <string.h>


struct ACCOUNT {
    unsigned int accountNumber;
    char name[50];
    double balance;
};


void displayAccount(struct ACCOUNT a) {
    printf("Account Details:\n");
    printf("Account Number: %d\n", a.accountNumber);
    printf("Name: %s\n", a.name);
    printf("Balance: %.2f\n", a.balance);
}

// Function to create an account
void createAccount(struct ACCOUNT *aptr) {
    printf("Enter details of the account\n");
    printf("Account Number: ");
    scanf("%d", &(aptr->accountNumber));
    printf("Name: ");
    scanf("%s", aptr->name);
    aptr->balance = 0.0;
}

// Function to add money to the account
void addMoney(struct ACCOUNT *aptr) {
    double amount;
    printf("Enter amount to add: ");
    scanf("%lf", &amount);
    aptr->balance += amount;
    printf("Amount %.2f added to the account.\n", amount);
}

// Function to withdraw money from the account
void withdrawMoney(struct ACCOUNT *aptr) {
    double amount;
    printf("Enter amount to withdraw: ");
    scanf("%lf", &amount);
    if (amount > aptr->balance) {
        printf("Insufficient balance!\n");
    } else {
        aptr->balance -= amount;
        printf("Amount %.2f withdrawn from the account.\n", amount);
    }
}

int main() {
    struct ACCOUNT acc;


    createAccount(&acc);
    displayAccount(acc);


    addMoney(&acc);
    displayAccount(acc);


    withdrawMoney(&acc);
    displayAccount(acc);

    return 0;
}
