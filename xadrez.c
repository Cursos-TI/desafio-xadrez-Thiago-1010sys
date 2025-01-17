#include <stdio.h>

#define BISPO_MOVEMENT 5  
#define TORRE_MOVEMENT 5  
#define RAINHA_MOVEMENT 8 


void moverBispo() {
    
    for (int i = 1; i <= BISPO_MOVEMENT; i++) {
        printf("Bispo se moveu para a diagonal superior direita (%d)\n", i);
    }
}


void moverTorre() {
    
    for (int i = 1; i <= TORRE_MOVEMENT; i++) {
        printf("Torre se moveu para a direita (%d)\n", i);
    }
}


void moverRainha() {
    
    for (int i = 1; i <= RAINHA_MOVEMENT; i++) {
        printf("Rainha se moveu para a esquerda (%d)\n", i);
    }
}

int main() {
    char atributo;

    
    printf("Escolha a peça para mover (b para Bispo, t para Torre, r para Rainha): ");
    scanf(" %c", &atributo);

    
    if (atributo == 'b') {
        printf("Movimento do Bispo:\n");
        moverBispo();
    } else if (atributo == 't') {
        printf("Movimento da Torre:\n");
        moverTorre();
    } else if (atributo == 'r') {
        printf("Movimento da Rainha:\n");
        moverRainha();
    } else {
        
        printf("Opção inválida! Escolha 'b', 't' ou 'r'.\n");
    }

    return 0;
}

