// 5. Write a program to find whether the given year is a leap year or not ( use % modulus operator)

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>

int checkleap(int year){

    if(year%400==0){
        return true;
    }else if(year%100==0){
        return false;
    }else if(year%4==0){
        return true;
    }else{
        return false;
    }
}
int main(){

    int year;
    printf("Enter the year : ");
    scanf("%d",&year);

    bool isleap=checkleap(year);
    if(isleap){
        printf("%d is a leap year",year);

    }else{
        printf("%d is not a leap year ",year);
    }


    return 0;

}