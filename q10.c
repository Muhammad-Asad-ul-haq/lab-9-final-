#include <stdio.h>

int largest(int num[], int size) {
    int large = num[0];
    for (int i = 1; i < size; i++) {  
        if (num[i] > large) {
            large = num[i];
        }
    }
    printf("The largest number in the array is: %d\n", large);  
    return large;
}

int smallest(int num[], int size) {
    int small = num[0];
    for (int i = 1; i < size; i++) {  
        if (num[i] < small) {
            small = num[i];
        }
    }
    printf("The smallest number in the array is: %d\n", small);  
    return small;
}

int main() {
    int size;
    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int numbers[size];
    printf("Enter the numbers:\n");
    for (int i = 0; i < size; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
    }

    largest(numbers, size);  
    smallest(numbers, size);  

    return 0;
}
