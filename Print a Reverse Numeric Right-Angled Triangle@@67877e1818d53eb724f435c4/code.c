#include <stdio.h>
int main(){
    int n,i,c;
    scanf("%d",&n);
    for (i=n;i>=1;i--){
        for(c=1;c<=i;c++){
            printf("%d ",c);
        }
        printf("\n");
    }
}