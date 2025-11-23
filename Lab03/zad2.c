#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);

    printf("Dodawanie: %d+%d=%d\n",a,b,a+b );
    printf("Odejmowanie: %d-%d=%d\n",a,b,a-b);
    printf("Mnozenie: %d*%d=%d\n",a,b,a*b);
    printf("Dzielenie: %d/%d=%d\n",a,b,a/b);
    printf("Dzielenie z reszta: %d/%d=%d\n",a,b,a%b);
    
}