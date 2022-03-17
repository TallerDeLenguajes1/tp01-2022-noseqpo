#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hola mundo \n");

    int *p;
    int numero = 55;
    p = &numero;

    printf("Contenido del puntero: %d\n", *p);
    printf("Direccion en el puntero: %p\n", p); 
    printf("Direccion de la variable: %p\n", &numero);
    printf("Direccion del puntero: %p\n", &p);
    printf("Tamaño de la variable: %d\n", sizeof(numero));
    
    return 0;
}
