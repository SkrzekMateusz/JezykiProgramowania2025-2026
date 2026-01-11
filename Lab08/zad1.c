#include <stdio.h> 

int global_var = 100;


void printAddresses(int a, int b) {
    
    printf("Adres zmiennej 'a' (lokalna kopia): %p\n", (void *)&a); 
    printf("Adres zmiennej 'b' (lokalna kopia): %p\n", (void *)&b); 
    printf("Wartość 'a': %d, Wartość 'b': %d\n", a, b);
}

int main() {
    int local_var;
    local_var = global_var; 

    printf("Wartość global_var: %d, Adres: %p\n", global_var, (void *)&global_var);
    printf("Wartość local_var: %d, Adres: %p\n", local_var, (void *)&local_var);

   
    printAddresses(local_var, global_var); 

    return 0;
}
