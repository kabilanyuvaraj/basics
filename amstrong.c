#include<stdio.h>
#include<math.h>
int count(int a){
    int c=0;
    while(a>0){
        a=a/10;
        c++;
    }
    return c;
}
void isarmstrong(int a){
    int l=0;
    int num=0,temp=a;
    l=count(a);
    while(temp!=0){
        num+=pow(temp%10,l);
        temp=temp/10;
    }
    if(num==a){
        printf("\nentered number is amstrong number");
    }else{
        printf("\nentered number is not amstrong number");
    }
}
void main(){
    int num;
    printf("\nenter the number :");
    scanf("%d",&num);
    isarmstrong(num);
}
