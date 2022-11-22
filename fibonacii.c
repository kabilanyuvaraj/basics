#include<stdio.h>
void main(){
    int n,a=0,b=1,i,nextterm;
    printf("\nenter the no of terms :");
    scanf("%d",&n);
    printf("%d\t%d",a,b);
    for(i=3;i<=n;i++){
        nextterm = a + b ;
        printf("\t%d",nextterm);
        a=b;
        b=nextterm;
    }


}