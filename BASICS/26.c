//26. Find the first digit of a number.

#include<stdio.h>
int main(){
    int n,dig;

    printf("Enter the number:");
    scanf("%d",&n);

    while(n>=10){
        n=n/10;
    }

    printf("FIRST DIGIT=%d",n);
}