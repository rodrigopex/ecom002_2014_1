#include <stdio.h>
#include <string.h>

struct pessoa {
    char nome[100];
    int idade;
    float altura;
};

typedef struct pessoa Pessoa; 

void stringCopy(char *origem, char *destino) {
    char *cursor = origem;
    char * cn = destino;
    for(; *cursor != '\0'; ++cursor, ++cn) {
        *cn = *cursor;
    }
    *cn = '\0';
}
    
int main() {
    Pessoa fulano;
    //fulano.nome = "Demetrios";
//    char *tmp = "Demetrios";
//    char *cursor = tmp;
//    char * cn = fulano.nome;
//    for(; *cursor != '\0'; ++cursor, ++cn) {
//        *cn = *cursor;
//    }
//    *cn = '\0';
    //stringCopy("Demetrios", fulano.nome);
    strcpy(fulano.nome, "Demetrios");
    fulano.idade = 35;
    fulano.altura = 1.79;
    
//    Pessoa cicrano;
//    cicrano.nome = "Geymerson";
//    cicrano.idade = 35;
//    cicrano.altura = 1.79;
//    
//    Pessoa beltrana;
//    beltrana.nome = "Camylla";
//    beltrana.idade = 35;
//    beltrana.altura = 1.79;
    
    printf("Nome: %s\n", fulano.nome);
    
    return 0;
}