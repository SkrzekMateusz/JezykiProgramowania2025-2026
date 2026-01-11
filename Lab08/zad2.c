#include <stdio.h>

int main() {
    int tablica[10]; 
    int* wsk = tablica; 
    int i;

    printf("Podaj 10 elementow tablicy:\n");

    
    for (i = 0; i < 10; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", (wsk + i)); 
    }

    printf("\nWczytane elementy tablicy:\n");

    for (i = 0; i < 10; i++) {
        printf("%d ", *(wsk + i)); 
    }
    printf("\n");

    return 0;
}
