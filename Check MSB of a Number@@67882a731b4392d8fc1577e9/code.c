#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    if(n & (pow(2,31)) == 0){
        printf("Set");
    }    
    else{
        printf("Not Set");
    }
}