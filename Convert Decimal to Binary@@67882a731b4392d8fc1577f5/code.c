#include <stdio.h>
int main(){
    int a;
    int binary[20];
    scanf("%d",&a);
    if(a==0){
        printf("0");
    }
    else{
    int i=0;
    while(a>0){
        binary[i]=a%2;
        a=a/2;
        i++;
    }
    for(int j=i-1;j>=0;j--){
        printf("%d",binary[j]);
    }
    }
    return 0;
}