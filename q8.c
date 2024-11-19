#include <stdio.h>

void add(int a, int b) {
    int sum = a + b;
    printf("The addition of these two is: %d\n", sum);
}

void subtract(int a, int b) {
    int sub = a - b;
    printf("The subtraction of these two is: %d\n", sub);
}

void multiply(int a, int b) {
    int mul = a * b;
    printf("The multiplication of these two is: %d\n", mul);
}

void division(int a, int b) {
        int div = a / b;
        printf("The division of these two is: %d\n", div);
    }


int main() {
    int n1, n2, choice;

    printf("Press 1 for addition\n");
    printf("Press 2 for subtraction\n");
    printf("Press 3 for multiplication\n");
    printf("Press 4 for division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    
    if (choice >= 1 && choice <= 4) {
        printf("Enter first number: ");
        scanf("%d", &n1);

        printf("Enter second number: ");
        scanf("%d", &n2);
    }

    switch(choice) {
        case 1:
            add(n1, n2);
            break;

        case 2:
            subtract(n1, n2);
            break;

        case 3:
            multiply(n1, n2);
            break;

        case 4:
            division(n1, n2);
            break;

        default:
            printf("Invalid choice\n");
            break;
    }

    return 0;
}