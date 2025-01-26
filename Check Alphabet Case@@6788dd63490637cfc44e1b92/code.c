#include <stdio.h>
int main(){
    char m;
    scanf("%c",&m);
    if(65<=m<=90){
        printf("Uppercase");
    }
    else if(97<=m<=122){
        printf("Lowercase");
    }
}