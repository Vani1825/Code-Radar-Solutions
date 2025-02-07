#include <stdio.h>
void bubblesort(int arr[],int n){
for(int r=0;r<n-1;r++){
    for(int i=0;i<n-1-r;i++){
       if(arr[i]>arr[i+1]){
        int t=arr[i];
        arr[i]=arr[i+1];
        arr[i+1]=t;
       }
    }
}
}
void printArray(int arr[],int n){
for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
printf("\n");
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
    free(arr);
    return 0;
}