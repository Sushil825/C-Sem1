// 7. Write a program to convert the given temperature in Fahrenheit to Celsius using the following
// conversion formula, C=(F-32)/1.8

#include<stdio.h>
#include<conio.h>

int main(){

    float F;

    printf("Tell the temperature in fahrenheit : ");
    scanf("%f",&F);
    float C;
    C=(F-32)/1.8;
    printf("The temperature in celsius is %f C ",C);


    return 0;
}