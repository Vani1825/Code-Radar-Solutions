#include <stdio.h>
int main(){
    int n,i,r;
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        char cp=65;
        for(r=1;r<=i;r++){
            printf("%c ",cp);
            cp++;
        }
        printf("\n");
    }
}