#include <stdio.h>
int main(){
    int a;
    int binary[20];
    scanf("%d",&a);
    int i=0;
    while(a>0){
        int n=a%2;
        binary[i]=n;
        a=a/2;
        i++;
    }
    for(int j=i-1;j>0;j++){
        printf("%d",binary[j]);
    }

}