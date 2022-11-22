#include<stdio.h>
#include<string.h>
void main(){
    char str[50];
    int i=0;
    int count=0;
    printf("\nenter the string :");
    gets(str);
    while(str[i]!=NULL){
        if(isalpha(str[i])){
            count++;
        }
        i++;
    }
    printf("no of alphabets in %s is %d",str,count);

}