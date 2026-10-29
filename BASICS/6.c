//6. Print numbers from 1 to N along with their squares.
#include<stdio.h>
int main(){
    int n,i;
    printf("enter n:");
    scanf("%d",&n);
for(i=1;i<=n;i++){
    printf("number=%d and square=%d\n",i,i*i);

}
}