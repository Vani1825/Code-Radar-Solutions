#include <stdio.h>
int main(){
    int n,i,r,c;
    scnaf("%d",&n);
    for(i=1;i<=n;i++){
        for(r=1;r<=4-i;r++){
            printf("  ");
        }
        for (c=1;c<=i;c++){
            printf("%d ",c);
        }
        printf("\n");
    }
}