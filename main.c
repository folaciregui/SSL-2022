// Francisca María Olaciregui Bonilla

#include <stdio.h>
#include <ctype.h>

/*
Nuestro programa debe leer de a 1 carácter y escribir en la salida:
• Si es una letra mayúscula, cambiar a minúscula.
• La inversa de la anterior, de minúscula a mayúscula.
• Si es un dígito decimal, no copiarlo a la salida.
• Todos los demás caracteres se copian sin modificar.
*/

int main(){

    int c;

    printf("Ingrese cadena de caracteres: ");

    while ((c = getchar()) != EOF){ 
        
        if (isupper(c)){
            putchar (tolower(c));
        }
        if(islower(c)){
            putchar (toupper(c));
        }
        if(isspace(c)){
            putchar(c);
        }
        if (ispunct(c)){
            putchar(c);
        }
        
    }

   return 0;
}

