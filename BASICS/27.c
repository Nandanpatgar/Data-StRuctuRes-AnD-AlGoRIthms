//27. Check whether a number is prime.

#include<stdio.h>
int main(){
    int n,i,count=0;

    printf("Enter the number:");
    scanf("%d",&n);

    for(i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }

    if(count==2){
        printf("Its a prime number!");
    }
    else{
        printf("Its not a prime number!");
    }
}