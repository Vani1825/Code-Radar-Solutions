int isPrime(int num){
    int i;
    for(i=2;i<num;i++){
        if(num%i==0){
            printf("1");
        }
        else{
            printf("0");
        }
    }                
}