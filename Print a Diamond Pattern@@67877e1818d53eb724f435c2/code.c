#include <stdio.h>
int main(){
    int i,s,c,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(s=1;s<=n-i;s++){
            printf(" ");
        }
        for(c=1;c<=(2*i)-1;c++){
            printf("*");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--){
        for(c=1;c<=(2*i)-1;i++){
            printf("*");
        }
        for(s=1;s<=n-1;s++){
            printf(" ");
        }
        printf("\n");
    }
}