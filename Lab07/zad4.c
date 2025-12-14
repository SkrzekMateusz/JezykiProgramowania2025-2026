#include <stdio.h>

long long fibonacci(int n){
    if(n <= 0){
        return 0;
    } else if(n == 1){
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(){
    int n;
    printf("Podaj n-ty wyraz ciagu Fibonacciego: ");
    scanf("%d", &n);

    if(n < 0){
        printf("Wyraz ciągu Fibonacciego nie moze byc ujemny.\n");
    } else {
        printf("N-ty wyraz ciągu Fibonacciego F(%d) wynosi: %lld.\n", n, fibonacci(n));
    }
    return 0;
}