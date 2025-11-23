#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);

    if(a > b){
    printf("Większą liczbą jest: %d\n", a);

    } else if(b > a) printf("Większą liczbą jest: %d\n", b);
    else printf("Liczby są takie same.\n");
    
    
}