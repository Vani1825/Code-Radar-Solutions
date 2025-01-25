#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n & 512 == 1){
        printf("Set");
    }    
    else{
        printf("Not Set");
    }
}