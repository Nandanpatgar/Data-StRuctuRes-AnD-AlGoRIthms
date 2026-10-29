//3. Print all even numbers from 1 to N.

#include<stdio.h>
int main(){

    int i,n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%2==0){
            printf("%d",i);
        }
    }
}