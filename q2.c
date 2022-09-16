// Write a program to find out the sum of two integer values and display the result on the screen. Input
// the two values from the keyboard

#include<stdio.h>
#include<conio.h>

int main(){

    int n1,n2,sum;
    printf("Enter the  number  :  ");
    scanf("%d",&n1);
    printf("Enter the  number  :  ");
    scanf("%d",&n2);

    sum=n1+n2;
    printf(" Sum of %d and %d is %d",n1,n2,sum);
    return 0;




}