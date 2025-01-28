#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    flag=1;
    if(n==1){
        printf("Not Prime");
    }
    else{
        for(int i>=2;i<=n;i++){
            if(n%i==0)
                flag==1;  
                break;  
        }   
        if(flag==0){
            printf("Prime");
        }    
        else{
            printf("Not Prime");
        }
    }    
}