#include<stdio.h>
#include<math.h>
int gp(int a,int r,int n){
    int i=0;
    int value;
    value=a*pow(r,n-1);
    return value;
}
void main(){
    int a,r,n;
    printf("enter the first term :");
    scanf("%d",&a);
    printf("enter the common ratio :");
    scanf("%d",&r);
    printf("enter the nth term u want to find :");
    scanf("%d",&n);
    printf("the %d term of the given gp is :%d",n,gp(a,r,n));
}