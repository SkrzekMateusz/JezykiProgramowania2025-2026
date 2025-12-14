#include <stdio.h>

    void funkcja_rek(int n){
        if(n > 1){
            funkcja_rek(n / 2);
        }
        printf("%d", n % 2);
    }

int main(){
    int a;
    printf("Podaj liczbe dziesietna: ");
    scanf("%d", &a);

    if(a < 0){
        printf("Program obsluguje tylko liczby nieujemne.\n");
    } else if(a == 0){
        printf("Reprezentacja binarna: 0\n");
    } else{
        printf("Reprezentacja binarna: ");
        funkcja_rek(a);
        printf("\n");
    }
    return 0;

}