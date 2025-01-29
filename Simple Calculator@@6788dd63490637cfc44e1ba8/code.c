#include <stdio.h>
int main(){
    int a,b,y;
    char m;
    scanf("%d %d", &a, &b);
    scanf("%*c");
    scanf("%c",&m);
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
            printf("Error\n");
        }        
    }
    else{
        printf("Error\n");
    }
    printf("%d\n",y);
}