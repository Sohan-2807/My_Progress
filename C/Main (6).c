// You are using GCC
// #include<stdio.h>
int main(){
    int sec,h=0,m=0,s=0,min=0;
    scanf("%d",&sec);
    min+=sec/60;
    s=sec%60;
    h+=min/60;
    m=min%60;
    printf("%dH/%dM/%dS",h,m,s);
}