#include <stdio.h>
#include <string.h>

void isPalindrome(char word[]) {
    int length = strlen(word);
    int first = 0;
    int last = length - 1;

    while (first < last) {
        if (word[first] != word[last]) {
            printf("%s is Not a Palindrome\n", word);
            return;
        }
        first++;
        last--;
    }

    printf("%s is a Palindrome\n", word);
}

int main() {
    int rows;

    printf("Enter the number of words: ");
    scanf("%d", &rows);

    char words[rows][21];

    printf("Enter %d words (No more than 20 characters):\n", rows);
    for (int i = 0; i < rows; i++) {
        printf("Word %d: ", i + 1);
        scanf("%s", words[i]);
    }

    for (int i = 0; i < rows; i++) {
        isPalindrome(words[i]);  
    }

    return 0;
}


