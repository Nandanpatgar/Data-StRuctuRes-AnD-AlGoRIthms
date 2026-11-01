// 18. Find the sum of digits of a number.
#include<stdio.h>
int main(){
    int n,dig,sum=0;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(n!=0){
        dig=n%10;
        sum+=dig;
        n=n/10;
    }
    
    printf("SUM=%d",sum);
}