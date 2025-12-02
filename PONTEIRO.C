#include<stdio.h>

int main(){
    int x=10;
    int *p = &x; // ponteiro p recebe o endereço de x

    printf("Valor de x: %d\n", x);
    printf("Endereço de x: %p\n", &x);
    printf("Valor de p (endereço de x): %p\n", p);
    printf("Valor apontado por p: %d\n", *p); // desreferenciação do ponteiro
    
    return 0;

}
