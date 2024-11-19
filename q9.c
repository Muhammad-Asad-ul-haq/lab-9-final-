#include <stdio.h>
#include <string.h>


void reverse(char str[]) {
    int length = strlen(str);
    int first = 0;
    int last = length - 1;
    
   
    while (first < last) {
        char temp = str[first];
        str[first] = str[last];
        str[last] = temp;
        
        first++;
        last--;
    }
}

int main() {
    char word[100];
    
    
    printf("Enter a word: ");
    gets(word);
    
   
    if (word[strlen(word) - 1] == '\n') {
        word[strlen(word) - 1] = '\0';  
    }
    
   
    reverse(word);
    
    
    printf("Reversed word: %s\n", word);
    
    return 0;
}
