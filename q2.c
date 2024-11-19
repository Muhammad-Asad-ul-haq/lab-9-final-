#include <stdio.h>

void isEven(int a) {
    if(a%2==0){
    int even = a ;
     printf("The number is even");
    }
    else{
    printf("The number is odd");
    }
}

int main(){
    int n1;
    printf("Enter number: ");
    scanf("%d", &n1);

    
    
    isEven(n1);
}
