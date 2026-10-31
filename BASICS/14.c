//14. Find 1² + 2² + 3² + … + N².

#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=(i*i);

    }
    printf("SUM=%d",sum);
}
