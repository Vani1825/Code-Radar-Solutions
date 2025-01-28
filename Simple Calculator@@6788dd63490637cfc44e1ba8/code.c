#include <stdio.h>
int main(){
    int a,b,y;
    char m;
    scanf("%d %d %c",&a,&b,&c);
    if(m=='+'){
        y=a+b;
    }
    else if(m=='-'){
        y=a-b;
    }
    else if(m=='*'){
        y=a*b;
    }
    else if(m=='/'){
        y=a/b;
    }
    printf("%d",y);
}