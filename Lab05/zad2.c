#include<stdio.h>

int main(){
    unsigned int a;
    unsigned int b;
    unsigned long long wynik =1;
    printf("Podaj pierwsza liczbe naturalna: ");
    scanf("%u", &a);
    printf("Podaj druga liczbe naturalna: ");
    scanf("%u", &b);

    for(unsigned int i = 0; i<b; i++){
        wynik *=a;
    }
    printf("%u do potegi %u to %llu\n", a,b,wynik);

}