#include <stdio.h>
#include <string.h>

int main() {
    char source[100], destination[100];
    int n;

    printf("Enter the destination string: ");
    gets(destination);  

    printf("Enter the source string: ");
    gets(source);  

    printf("Enter the number of characters to append: ");
    scanf("%d", &n);

    strncat(destination, source, n);

    printf("New String: %s\n", destination);

    return 0;
}

