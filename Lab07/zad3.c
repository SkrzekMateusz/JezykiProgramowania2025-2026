#include <stdio.h>

    void wypiszLiczby(int n){
        if(n <=0 ){
            return; 
        }
        wypiszLiczby(n-1);

        printf("%d, ", n);

    }

int main(){
    int n;
    printf("Podaj liczbe n:");
    scanf("%d", &n);

    printf("Liczby od 1 do %d: ", n);
    wypiszLiczby(n);
    printf("\n");

    return 0;



}