#include <stdio.h>
int main(){
    int n,i,r,cp=65;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(r=65;r<=i;r++){
            printf("%c",cp);
            cp++;
        }
        printf("\n");
    }
}