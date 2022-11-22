#include<stdio.h>
int rev(int a){
    int rev=0;
    int temp;
    while(a>0){
        temp=a%10;
        rev=rev*10+temp;
        a=a/10;
    }
    return rev;
}
void main(){
    int n;
    printf("enter the number :");
    scanf("%d",&n);
    printf("the number aftering reversing the digits :%d",rev(n));
}