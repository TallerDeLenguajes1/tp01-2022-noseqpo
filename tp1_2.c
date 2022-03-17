int cuadrado(int num);
void cuadradoV(int *num);
void mostrar(int var);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main(int argc, char const *argv[])
{
    
    return 0;
}

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