#include<stdio.h>
int main(){
    int n,max,min,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    max=a[0];
    int min=a[0];
    for(i=0;i<n;i++){
        if(max<a[i]){
            max=a[i];
        }
    }
    for (i=0;i<n;i++){
        if(min<a[i]){
            min=a[i];
        }
    }
    printf("%d ",min);
    printf("%d",max);
}