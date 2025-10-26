#include<stdio.h>

int main(){
    int a;
    int b;
    int c;
    printf("Podaj pierwszą liczbę: ");
    scanf("%d", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%d", &b);
    printf("Podaj trzecią liczbę: ");
    scanf("%d", &c);

   int max = a;

   if(b>max)
   max = b;
    if(c>max)
   max = c;
    
   printf("Największa liczba to: %d\n", max);

   return 0;
    
}