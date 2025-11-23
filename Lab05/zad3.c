#include <stdio.h>
#include <math.h>

int main() {
    double a, b;
    printf("Podaj liczbę a: ");
    scanf("%lf", &a);
    printf("Podaj liczbę b: ");
    scanf("%lf", &b);
    if (a <= 0) {
        printf("Liczba 'a' musi być większa od 0.\n");
        return 1;
    }
    if (b <= 0) {
        printf("Liczba 'b' musi być większa od 0.\n");
        return 1;
    }
    if (a == 1) {
        printf("Dla a=1, a^c nie będzie nigdy większe od b (chyba że b<1).\n");
        return 1;
    }

    int c = 0;
    double potega = 1; 

   
    while (potega <= b) {
        potega = potega * a;
        c++;
    }

    printf("Pierwsza liczba c, dla której %g do potęgi c jest większe od %g, to c = %d\n", a, b, c);

    return 0;
}