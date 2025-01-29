#include <stdio.h>
int main(){
    char m;
    scanf("%c",&m);
    if(m=='R'){
        printf("Stop");
    }
    else if(m=='G'){
        printf("Go");
    }
    else if(m=='Y'){
        printf("Slow Down");
    }
    else{
        printf("Invalid input")
    }
}