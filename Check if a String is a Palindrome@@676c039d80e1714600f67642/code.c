#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    int flag=1;
    scanf("%s",s);
    len=strlen(s);
    for(i=0;i<len;i++){
       if(s[i]==s[len-1-i]){
        flag=0;
       }
    }
    if(flag==0){
        printf("Yes");
    }
    else{
        printf("No")
    }
}