#include <stdio.h>
int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int c= (a>>b)&1;
    int z=a<<b;
    printf("%d",z)  
}