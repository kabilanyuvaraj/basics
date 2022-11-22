#include<stdio.h>
int leapyear(int a){
    if((a%4==0)&&((a%400==0)||(a%100!=0))){
        return 1;
    }else{
        return 0;
    }
}
int days(int a,int b){
    if(a==1||a==3||a==5||a==7||a==8||a==10||a==12){
        return 31;
    }else if(a==4||a==6||a==9||a==11){
        return 30; 
    }else if(a==2){
        if(leapyear(b)==1){
            return 29;
        }else if(leapyear(b)==0){
            return 28;
        }
    }
}
void main(){
    int m,y;
    printf("enter the year");
    scanf("%d",&y);
    printf("\nenter the month");
    scanf("%d",&m);
    printf("\nthe no of days in %d month of %d year is : %d",m,y,days(m,y));
}