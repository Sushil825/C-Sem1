// Write a program for swapping the two numbers with / without using another variable.

#include<stdio.h>
#include<conio.h>

int main(){
    int first,sec;
    printf("\nEnter the first and second number  :  ");
    scanf("%d%d",&first,&sec);
    printf("\nFirst no is %d and second number is : %d",first,sec);

    //Swapping with var
    int temp;
    temp=first;
    first=sec;
    sec=temp;

    printf("\nAfter swapping using another variable ,the no are first : %d and second  : %d",first,sec);

    //Swapping without var
    first= first-sec;
    sec=first+sec;
    first=sec-first;
    printf(" \n After swapping without using var ,the no swapped are first : %d and second :  %d ",first,sec);





    return 0;
}