//23. Count how many odd digits are present in a number.

#include<stdio.h>
int main(){
    int n,dig,count=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(n!=0){
        dig=n%10;
      if(dig%2!=0){
        count++;
      }
        n=n/10;
    }
    
    printf("COUNT of even digits=%d",count);
}