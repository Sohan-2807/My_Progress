// You are using GCC
#include<stdio.h>
int main(){
    char a;
    scanf("%c",&a);
    switch(a){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        printf("Vowel");
        break;
        default :
        printf("Consonent");
        
    }
    return 0;
}
