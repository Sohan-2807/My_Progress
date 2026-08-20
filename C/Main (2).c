// You are using GCC
#include<stdio.h>
int main(){
    int n,num,temp=0,oct=0;
    scanf("%d",&n);
    num=n;
    while(n>0){
        temp =temp*10+(n%8);
        n = n/8;
    }
    while(temp>0){
        oct = oct*10+(temp%10);
        temp = temp/10;
    }
    printf("%d octal is %d",num,oct);
    return 0;
}
