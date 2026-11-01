//25. Find the smallest digit in a number.

#include<stdio.h>
int main(){
    int n,dig,smallest=9;
    
    printf("Enter the number:");
    scanf("%d",&n);
 
    
    while(n!=0){
        dig=n%10;

      if(dig<smallest){
        smallest=dig;
      }
        n=n/10;
    }
    
    printf("smallest digit=%d",smallest);
}