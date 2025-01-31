#include <stdio.h>
int main(){
    int n,i,s,c;
    scanf("%d",&n);
    for (i=1;i<=n;i++){
        for(s=1;s<=4-i;s++){
            printf(" ");
        }
        for(c=1;c<=2*i-1;c++){
            printf("*");
        }
        printf("\n");
    }
    
}