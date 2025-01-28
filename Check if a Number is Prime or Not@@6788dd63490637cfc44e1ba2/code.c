#include <stdio.h>
int main(){
    int ;n
    scanf("%d",&n);
    flag=1;
    if(n==1){
        printf("Not Prime");
    }
    else{
        for(int i>=1;i<=a;i++){
            if(n%i==0)
                flag++;  
                break;  
        }   
        if(flag>2){
            printf("Prime");
        }    
        else{
            printf("Not Prime");
        }
    }    
}