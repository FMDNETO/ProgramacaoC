#include<stdio.h>
#include<string.h>

#define MAX_NOME 50

void saudacao(char texto[]){
    printf("Olá, %s!\n", texto);
}

int main(){
    char nome[MAX_NOME];
    printf("Digite seu nome: ");
    fgets(nome, MAX_NOME, stdin);

    // Remove a nova linha (\n) do final da string lida pelo fgets
    nome[strcspn(nome, "\n")] = '\0'; 

    void (*ptr)(char[])=saudacao; // Declaração do ponteiro para função
    (*ptr)(nome); // Chamada da função através do ponteiro
    
    return 0;

}
