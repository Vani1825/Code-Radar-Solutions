#include <stdio.h>
int bubblesort(arr,n){
for(int r=0;r<n-1;r++){
    for(int i=0;i<=n-1-r;i++){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
    }
}
}
int printArray(arr,n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    bubblesort(arr,n);
    printArray(arr,n);
}