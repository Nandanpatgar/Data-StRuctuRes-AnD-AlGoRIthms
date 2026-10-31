//10. Find the sum of all even numbers from 1 to N.
#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
      for(i=1;i<=n;i++){
    if(i%2==0){
  
        sum+=i;

    }
}
    printf("SUM=%d",sum);
}

