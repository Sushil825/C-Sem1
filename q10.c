#include<stdio.h>
#include<conio.h>
#include<math.h>

int main(){

    int salary,hours;

    printf("Welcome to week wage calculator : ");
    printf("\nWhat is your salary per hour? ");
    scanf("%d",&salary);
    printf("  How many hours did you work this week ?  ");
    scanf("%d",&hours);
    if (hours>40)
    {
        int extrahours=hours-40;
        int extrasal=extrahours*salary*1.5;
        int maxsal=(40*salary)+extrasal;
        printf("You worked more than 40 hrs in a week ,so our weekly wage is : %d ",maxsal);

    }else
    {
        int sal=hours*salary;
        printf("%d is your salary ",sal);
    }
    
    

    return 0;
}