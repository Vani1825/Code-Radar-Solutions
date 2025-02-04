#include <stdio.h>
int main(){
    int n,i,c,m=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(c=1;c<=i;c++){
            printf("%d ",m);
            m++;
        }
        printf("\n");
    }
}