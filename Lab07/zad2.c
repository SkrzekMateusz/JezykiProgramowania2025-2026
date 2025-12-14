#include <stdio.h>

int funkcja_rek(int a, int b){
    if(b == 0){
        return a;
    } else{
        return funkcja_rek(b, a % b);
    }
}

int main(){
    int liczba1;
    int liczba2;
    printf("Podaj dzielna:");
    scanf("%d", &liczba1);
    printf("Podaj dzielnik:");
    scanf("%d", &liczba2);
    int wynik = funkcja_rek(liczba1, liczba2);
    printf("NWD(%d, %d) = %d\n", liczba1, liczba2, wynik);
    return 0;

}


