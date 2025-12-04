#include<stdio.h>

int main(){
    int x=10;
    int *p = &x; // ponteiro p recebe o endereço de x

    printf("\n\n");
    printf("Valor de x: %d\n", x);
    printf("Endereço de memóra de x: %p\n", &x);
    printf("Valor de p (endereço de memória de x): %p\n", p);
    printf("Valor apontado por p: %d\n", *p); // desreferenciação do ponteiro

    // Modificando o valor de x através do ponteiro p
    printf("\nModificando o valor de x através do ponteiro p...\n\n");
    printf("Digite um novo valor para x: ");
    scanf("%d", p); // lendo diretamente para o endereço apontado por p

    printf("Valor de x: %d\n", x);
    printf("Endereço de memóra de x: %p\n", &x);
    printf("Valor de p (endereço de memória de x): %p\n", p);
    printf("Valor apontado por p: %d\n", *p); // desreferenciação do ponteiro
    
    return 0;

}
