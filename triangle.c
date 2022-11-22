#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter the sides of the triangle :");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && a==c){
        printf("\nenterd the a equilateral triangle");
    }else if(a==b || b==c || c==a){
        printf("\nenterd is the isosceles triangle");
    }else{
        printf("\nenterd is the scalene triangle");
    }
    
}