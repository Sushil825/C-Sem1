// 13.  For a certain electrical circuit with an inductance L and resistance R, the damped natural frequency  is 
// given by  Frequency = [(1/LC-R2/4C2)] It is desired to study the variation of this frequency with C (capacitance). Write a program to calculate 
// the frequency for different value of C starting from 0.1 in steps of 0.01. 
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){
    double i,R,L,C,f,ending;
    printf("\n Enter the inductance :  ");
    scanf("%lu",&L);
    printf("\n Enter the resistance :  ");
    scanf("%lu",&R);
    printf("\n Enter the ending C :  ");
    scanf("%lu",&ending);
    for ( i = 0.1; i <=ending; i=i+0.01)
    {   

        f=sqrt((1/(L*C))-(R*R/(4*C*C)));
        //[(1/LC-R2/4C2)] 
        printf("\n Frequency for C %lu is %lu",i,f);
    }
    
    return 1;
}