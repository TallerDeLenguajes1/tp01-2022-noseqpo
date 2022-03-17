int cuadrado(int num){
    return num*num;
}

void cuadradoV(int *num){
    *num = cuadrado(*num);
}

void mostrar(int var){
    printf("Direccion de la variable: %p\n", &var);
    printf("Contenido de la variable: %d\n", var);
}

void invertir(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void orden(int *a, int *b){
    if (*a > *b)
    {
        invertir(a,b);
    }   
}

