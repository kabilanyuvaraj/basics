#include<stdio.h>
void main(){
    int n,i=0;
    int large1,large2;
    printf("\nenter the no of ele :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        printf("\n enter the ele :");
        scanf("%d",&arr[i]);
    }
    printf("\nentered array is :\n");
    for(i=0;i<n;i++){
        printf("\t%d",arr[i]);
    }
    large1=-1111;
    i =0;
    while(i<n){
        if(arr[i]>large1){
            large1=arr[i];
        }
        i++;
    }
    large2=-1111;
    i=0;
    while(i<n){
        if(arr[i]!=large1){
            if(arr[i]>large2){
              large2=arr[i];
            }
        }
        i++;
        
    }
    printf("\nthe first largest no in the given array is :%d",large1);
    printf("\nthe second largest no in the given array is :%d",large2);
    
    
}