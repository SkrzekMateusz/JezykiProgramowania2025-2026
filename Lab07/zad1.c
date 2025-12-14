#include <stdio.h>

int silnia(int n){
    if(n>0){
        return n*silnia(n-1);
    }else{
        return 1;
    }
}
int main(){
        int n;
        printf("Podaj silnię:");
        scanf("%d", &n);
        printf("Silnia %d = %d\n",n,silnia(n));
}
