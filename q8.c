// 8. Write a program to find out the average of any ten numbers. (Use (a) while loop, and (b) for loop).
#include<stdio.h>
#include<conio.h>

int foravg(int L[]){    
    int no=10,sum=0;
    for(int i=0;i<no;i++){

        sum+=L[i];
    }
    float result=sum/no;
    return result;
}
int whileavg(int L[]){

    int no=10,i=0,sum;

    while(i<no){

        sum+=L[i];
        i+=1;
    }

    float result=sum/no;
    return result;

}

int main(){

    int L[]={1,3,5,7,9,12,15,18,20,22};

    float res1=foravg(L);
    float res2=whileavg(L);
    printf("Result of for loop : %f anf the result of while loop is %f ",res1,res2);

    return 0;
}