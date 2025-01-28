#include <stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    flag=1;
    for(int i=2;i<=a;i++){
        if(a%i==0)
            flag++;  
            break;  
    }
    if(flag==1){
        printf("Prime");
    }    
    else{
        printf("Not Prime");
    }
}