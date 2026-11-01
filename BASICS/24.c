//24. Find the largest digit in a number.

#include<stdio.h>
int main(){
    int n,dig,largest=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(n!=0){
        dig=n%10;
      if(dig>largest){
        largest=dig;
      }
        n=n/10;
    }
    
    printf("largest digit=%d",largest);
}