#include <stdio.h>
int main(){
    int a,b,y;
    char m;
    scanf("%d %d %c", &a, &b, &m);
    if(m== '+'){
        y=a + b;
    }
    else if(m== '-'){
        y=a - b;
    }
    else if(m== '*'){
        y=a * b;
    }
    else if(m== '/'){
        if(b!=0){
            y=a/b;
        }
        else{
            printf("Invalid\n");
            return 1;
        }        
    }
    else{
        printf("Invalid Operator\n");
        return 1;
    }
    printf("%d",y);
}