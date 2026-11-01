//19. Find the product of digits of a number.

#include<stdio.h>
int main(){
    int n,dig,product=1;
    
    printf("Enter the number:");
    scanf("%d",&n);
    
    while(n!=0){
        dig=n%10;
        product*=dig;
        n=n/10;
    }
    
    printf("PRODUCT=%d",product);
}