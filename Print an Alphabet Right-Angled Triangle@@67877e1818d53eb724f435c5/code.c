#include <stdio.h>
int main(){
    int n,i,r;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(r=65;r<=i;r++){
            printf("%c",r);
        }
    }
}