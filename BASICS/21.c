//21. Check whether a number is a palindrome.

// 21. Check whether a number is a palindrome.

#include<stdio.h>
int main(){
    int n,temp,dig,rev=0;

    printf("Enter the number:");
    scanf("%d",&n);

    temp=n;

    while(n!=0){
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }

    if(temp==rev){
        printf("Its palindrome!");
    }
    else{
        printf("Its not palindrome!");
    }
}