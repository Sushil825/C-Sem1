#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

int main(){

    int n;
    float time,u,d=0,a;

    printf("Enter the number of intervals : ");
    scanf("%d",&n);
    for(int i=1;i<n+1;i++){

        printf("Enter the time for interval %d  : ",i);
        scanf("%f",&time);

        printf("Enter the initial velocity for interval %d  : ",i);
        scanf("%f",&u);

        printf("Enter the acceleration for interval %d  : ",i);
        scanf("%f",&a);

        d= d+(u*time+(a*(pow(time,2))))/2;
        
    }

    printf("The total distance travelled is : %.2f ",&d);
    return 0;
}