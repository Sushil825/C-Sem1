#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

int main(){
    
    int math,phy,chem,admission;

    printf("Enter the marks for mathematics,physics and chemistry  : ");
    scanf("%i%i%i",&math,&phy,&chem);

    if (math>=60 && phy>=50 && chem>=40 && (math+chem+phy)>=200 ){
        admission=1;
    }else if((math+phy>=150)){
        admission=1;
    }else{
        admission=0;
    }

    if(admission){
        printf("Congrats you got the admission");
    }else{
        printf("Good luck for the next time");
    }
    return 1;

}