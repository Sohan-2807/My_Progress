// You are using GCC
#include<stdio.h>
int prime(int a){
    int p = 0,i;
    for(i=2;i<a/2;i++){
        if(a%i==0){
            p = 1;
            break;
        }
    }
        if(p==0){
            printf("Prime number");
            
        }
        else{
            printf("Not prime number");
            
        }
        
    
    
}
    int main(){
        prime(4);
        return 0;
    }
