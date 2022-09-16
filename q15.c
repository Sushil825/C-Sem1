#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
void main(){
    char word[20];
    printf("Write the word : ");
    char wo="D";
    scanf("%s",word);

    for(int i=0;i<sizeof(word);i++){
        if(word[i]==wo){
            
        }
        printf("%c",word[i]);
    }

}