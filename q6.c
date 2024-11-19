
#include <stdio.h>
#include <string.h>


void swapping(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
    
    
}

int main() {
  int n1,n2;
  
  printf("Enter first number: ");
  scanf("%d",&n1);
  
  printf("Enter second number: ");
  scanf("%d",&n2);
  
  swapping(&n1, &n2);
  
  printf("The swapped values are:\n first number: %d \n second number: %d",n1,n2);



return 0;
}