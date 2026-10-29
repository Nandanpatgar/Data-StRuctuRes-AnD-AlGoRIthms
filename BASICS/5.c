//5. Print numbers divisible by 3 from 1 to N.
#include<stdio.h>
int main(){

    int i,n;
    printf("enter value of n:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i%3==0){
            printf("%d\t",i);
        }
    }
}