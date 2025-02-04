#include <stdio.h>
int main(){
    int n,i,r,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(r=1;r<=n-i;r++){
            printf(" ");
        }
        for (c=1;c<=i;c++){
            printf(" %d ",c);
        }
        printf("\n");
    }
}