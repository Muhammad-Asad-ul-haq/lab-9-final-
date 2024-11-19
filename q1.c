#include <stdio.h>

void multiply(int a, int b) {
    int mul = a * b;
    printf("The multiplication of these two is: %d\n", mul);
}

int main(){
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d", &n1);

    printf("Enter second number: ");
    scanf("%d", &n2);
    
    multiply(n1,n2);
}
