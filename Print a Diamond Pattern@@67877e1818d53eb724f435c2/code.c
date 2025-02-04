#include <stdio.h>
int main(){
    int i,s,c,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
        for(c=1;c<=2*i-1;c++){
            printf("*");
        }
        printf("\n");
    }
}