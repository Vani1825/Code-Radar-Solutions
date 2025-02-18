#include <stdio.h>
int main(){
    int a,b,y;
    char m;
    scanf("%d %d", &a, &b);
    scanf(" %c",&m);
    if(m== '+'){
        y= a + b;
    }
    else if(m== '-'){
        y= a - b;
    }
    else if(m== '*'){
        y= a * b;
    }
    else if(m== '/'){
        if(b!=0){
            y=a/b;
        }
        else{
            printf("error\n");
            return 1;
        }        
    }
    else{
        printf("Error");
        return 1;
    }
    printf("%d\n",y);
}