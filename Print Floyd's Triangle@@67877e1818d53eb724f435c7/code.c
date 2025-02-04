#include <stdio.h>
int main(){
    int n,i,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        int m=1;
        for(c=1;c<=i;c++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
}