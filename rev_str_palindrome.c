#include<stdio.h>
#include<string.h>
void rev(char a[100]){
    int i=0,j=0;
    int l;
    char temp;
    l=strlen(a)-1;
    while(i<l){
        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
        i++;
        l--;
    }
    puts(a);
}
int ispalindrome(char a[100]){
    int i=0,j;
    j=strlen(a)-1;
    while(i<j){
        if(a[i]!=a[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
void main(){
    char str[100];
    printf("\nenter the string :");
    gets(str);
    printf("\nthe reversed string : ");
    rev(str);
    if(ispalindrome(str)==1){
        printf("\nentered string is palindrome");
    }
    if(ispalindrome(str)==0){
        printf("\nentered string is not a palindrome");
    }
}