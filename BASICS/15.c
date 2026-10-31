// 15. Find the product of numbers from 1 to N.

#include<stdio.h>
int main(){
    int n,i,product=1;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        product=product*i;

    }
    printf("PRODUCT=%d",product);
}