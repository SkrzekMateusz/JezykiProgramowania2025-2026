#include <stdio.h>

// Funkcje działań matematycznych
float dodaj(float a, float b) {
    return a + b;
}

float odejmij(float a, float b) {
    return a - b;
}

float mnoz(float a, float b) {
    return a * b;
}

float dziel(float a, float b) {
    if (b == 0) {
        printf("Błąd: dzielenie przez zero!\n");
        return 0;
    }
    return a / b;
}

int main() {
    float x, y;
    int wybor;

    // Wczytanie liczb
    printf("Podaj pierwsza liczbe: ");
    scanf("%f", &x);

    printf("Podaj druga liczbe: ");
    scanf("%f", &y);

    // Menu wyboru działania
    printf("\nWybierz dzialanie:\n");
    printf("1. Dodawanie\n");
    printf("2. Odejmowanie\n");
    printf("3. Mnozenie\n");
    printf("4. Dzielenie\n");
    printf("Twoj wybor: ");
    scanf("%d", &wybor);

    // Obsługa działania
    switch (wybor) {
        case 1:
            printf("Wynik: %.2f\n", dodaj(x, y));
            break;
        case 2:
            printf("Wynik: %.2f\n", odejmij(x, y));
            break;
        case 3:
            printf("Wynik: %.2f\n", mnoz(x, y));
            break;
        case 4:
            printf("Wynik: %.2f\n", dziel(x, y));
            break;
        default:
            printf("Niepoprawny wybor!\n");
            break;
    }

    return 0;
}
