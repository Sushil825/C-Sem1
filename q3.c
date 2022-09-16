// Write a program to find out the greatest of three numbers
#include<stdio.h>
#include<conio.h>

int main (){
    int n1,n2,n3;

    printf("Enter the three numbers");
    scanf("%d %d %d",&n1,&n2,&n3);

    if(n1>n2){
        if(n1>n3){
            printf("%d is the largest",n1);
        }else{
            printf("%d is the largest",n3);
        }       
    }else if(n2>n3){

        printf("%d is the largest",n2);

    }else{
        printf("%d is the largest ",n3);
    }


    return 0;
}