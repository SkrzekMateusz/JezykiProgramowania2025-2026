#include<stdio.h>

int main(){
    int n;
    long long suma = 0;

    printf("Podaj liczbę naturalna n: ");
    scanf("%d", &n);

    if(n<1){
        printf("n musi byc liczba naturalna >=1\n");
        return 0;
    }
    for(int i = 1; i <= n; i++) {
        suma += (long long) i*i;
    }

    printf("Suma kwadratów od 1 do %d wynosi %lld\n, n, suma");
    return 0;

}