// 9. Write a program to generate Fibonacci sequence. (1,1,2,3,5,8,13, …)
#include<stdio.h>
#include<conio.h>

int main(){

    int a=0,b=1,c,n;

    printf("Enter the no : ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("%d ,",b);
        c=a+b;
        a=b;
        b=c;

        
    }

    return 0;

}