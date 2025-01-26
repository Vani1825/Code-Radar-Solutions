#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if ((a>b ||b>c ||c>a) || (b>a ||c>b ||a>c)){
        printf("Valid");
    }
    else{
        printf("Invalid");
    }
}