#include <stdio.h>
int main(){
    char m;
    scanf("%c",&m);
    if(m>=65 && m<=90){
        printf("Uppercase");
    }
    else if(m>=97 && m<=122){
        printf("Lowercase");
    }
}