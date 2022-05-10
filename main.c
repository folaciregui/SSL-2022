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

    char caracter;

    printf("Ingrese cadena de caracteres: ");
    caracter = getchar();

    while (caracter != '\n'){ 
        
        if (isupper(caracter)){
            caracter = tolower(caracter);
        }
        else if(islower(caracter)){
            caracter = toupper(caracter);
        }
        else if(isdigit(caracter)){
            caracter = '\0';
        }
        else{
            caracter = caracter;
        }
        printf("%c",caracter);
        
        caracter = getchar();
        
    }

   return 0;
}
