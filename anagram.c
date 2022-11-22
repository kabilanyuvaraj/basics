#include<stdio.h>
#include<string.h>
char tolower(char a){
    if(a>='A' && a<='Z'){
        return a+32;
    }else{
        return a;
    }
}
void anagram(char a[],char b[]){
    char a1[26]={0};
    char b1[26]={0};
    int i=0;
    int check=0;
    while(a[i]!=NULL){
        a[i]=tolower(a[i]);
        a1[a[i]-'a']=a1[a[i]-'a']+1;
        i++;
    }
    i=0;
    while(b[i]!=NULL){
        b[i]=tolower(b[i]);
        b1[b[i]-'a']=b1[a[i]-'a']+1;
        i++;
    }
    for(i=0;i<26;i++){
        if(a1[i]!=b1[i]){
            check++;
        }

    }
    if(check==0){
        printf("\n%s and %s are  anagram ",a,b);
    }else{
        printf("\n%s and %s are not anagram ",a,b);
    }
}

void main(){
    char a[50],b[50];
    printf("\nenter the string 1 :");
    gets(a);
    printf("\nenter the string 2 :");
    gets(b);
    anagram(a,b);
}
