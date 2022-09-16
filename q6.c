// 6. Write a program to find out the real roots of quadratic equation, Ax2
// +Bx+C=0.

#include<stdio.h>
#include<conio.h>
#include<stdbool.h>
#include<math.h>


int main(){
    float a,b,c;
    printf("Enter a then b then c : ");
    scanf("%f%f%f",&a,&b,&c);
    float d=(b*b)-4*a*c;
    if(d>0){
        float r1,r2;

        r1=(-b + sqrt(d) )/2*a;
        r2=(-b - sqrt(d) )/2*a;

        printf("The real roots are %f and %f",r1,r2);

    }else if(d<0){
        printf("Roots are imaginary");
    }else{
        float r = -b/2*a;
    }


    return 0;
}