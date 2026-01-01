#include <stdio.h>

/* Function declarations */
void print1toN();
void printEven();
void printOdd();

int main() {
    int choice;

    /* Menu */
    printf("Name: Atul Kumar Tripathi\n");
    printf("ERP: 10333\n");
    printf("\n--- Menu ---\n");
    printf("1. Print numbers from 1 to N\n");
    printf("2. Print even numbers up to N\n");
    printf("3. Print odd numbers up to N\n");
    printf("4. Exit\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    /* Switch case for menu selection */
    switch (choice) {
        case 1:
            print1toN();
            break;

        case 2:
            printEven();
            break;

        case 3:
            printOdd();
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}

/* Function to print numbers from 1 to N */
void print1toN() {
    int n;
    printf("Enter the number N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", i);
    }
}

/* Function to print even numbers up to N */
void printEven() {
    int n;
    printf("Enter the Number N: ");
    scanf("%d", &n);

    for (int i = 2; i <= n; i += 2) {
        printf("%d ", i);
    }
}

/* Function to print odd numbers up to N */
void printOdd() {
    int n;
    printf("Enter the Number N: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i += 2) {
        printf("%d ", i);
    }
}
// Name: Atul Kumar Tripathi
// ERP: 10333

// --- Menu ---
// 1. Print numbers from 1 to N
// 2. Print even numbers up to N
// 3. Print odd numbers up to N
// 4. Exit
// Enter your choice: 1
// Enter the number N: 20
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 

// --- Menu ---
// 1. Print numbers from 1 to N
// 2. Print even numbers up to N
// 3. Print odd numbers up to N
// 4. Exit
// Enter your choice: 2
// Enter the Number N: 20
// 2 4 6 8 10 12 14 16 18 20 


// --- Menu ---
// 1. Print numbers from 1 to N
// 2. Print even numbers up to N
// 3. Print odd numbers up to N
// 4. Exit
// Enter your choice: 3
// Enter the Number N: 20
// 1 3 5 7 9 11 13 15 17 19 

// --- Menu ---
// 1. Print numbers from 1 to N
// 2. Print even numbers up to N
// 3. Print odd numbers up to N
// 4. Exit
// Enter your choice: 4
// Exiting program.