int isPrime(int num){
    int i,flag=0;
    if(num<=1){
        printf("0");
    }
    for(i=2;i<num;i++){
        if(num%i==0){
            flag=1;
            break;
        }
    }    
    if(flag==0){
        printf("1");
    } 
         
    else{
        printf("0");
    }      
}