// You are using GCC
#include<stdio.h>
int main(void){
    int i = 873;
    double f = 123.94536;
    char s[] = "Happy Birthday";
    printf("Using precision for integers");
    printf("%.4d \n %.9d\n\n",i,i);
    printf("Using precision for floating-point numbers");
    printf("%3f\n %.3e\n %.3g\n\n",f,f,f);
    printf("Using precision for strings\n");
    printf("%.11s \n",s);
}
