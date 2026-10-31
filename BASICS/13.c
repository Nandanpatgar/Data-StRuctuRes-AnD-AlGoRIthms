//13. Find the factorial of N.
#include<stdio.h>
int main(){

    int i,n,factorial=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=n;i>0;i--){
        factorial=factorial*i;
    }
    printf("FACTORIAL of %d=%d",n,factorial);
}