#include<stdio.h>

int main(){
    char input_char;
    int input_int;
    int is_char = 0; 

    printf("Podaj znak lub kod ASCII: ");

    
    if (scanf(" %d", &input_int) == 1) {
        if ((input_int >= 65 && input_int <= 90) || (input_int >= 97 && input_int <= 122)) {
            printf("%d to kod ASCII litery.\n", input_int);
        } else {
            printf("%d nie jest kodem ASCII litery.\n", input_int);
        }
    } else {
        scanf(" %c", &input_char); 
        
        
        if ((input_char >= 'a' && input_char <= 'z') || (input_char >= 'A' && input_char <= 'Z')) {
            printf("Znak '%c' to litera alfabetu.\n", input_char);
        } else {
            printf("Znak '%c' nie jest literą alfabetu.\n", input_char);
        }
    }

    return 0;
}
  


   
    
