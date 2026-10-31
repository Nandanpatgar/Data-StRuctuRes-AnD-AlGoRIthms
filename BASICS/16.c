//16. Find the average of N numbers entered by the user.

#include<stdio.h>
int main(){
    int n,i,sum=0;
    double average;
    printf("enter the value of n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum+=i;

    }
 average=(double)sum/n;
    printf("AVERAGE=%lf",average);
}
