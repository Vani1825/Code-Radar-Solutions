#include<stdio.h>
int main(){
    int n,flag=0;
    scanf("%d",&n);
    int m[n];
    for(i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    for(i=0;i<n;i++){
        for(j=2;j<n;j++){
            if(m[i]%j==0){
                flag=1;
                printf("0");
            }
            else{
        printf("1");
        }
        }
    }
   
    

}