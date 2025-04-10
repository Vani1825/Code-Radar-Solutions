#include<stdio.h>
int main(){
    int count=0;
    char s[110];
    scanf("%s",s);
    for(int i=0;s[i]='\0';i++){
        if(s[i] == " "){
            count++;
        }
    }
    printf("%d",count);
}