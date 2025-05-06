#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Constates de movimentação
#define Mov_bispo 5
#define Mov_torre 5
#define Mov_rainha 8
#define Mov_Cavalo_Vertical 8
#define Mov_Cavalo_Horizontal 8

//função recursiva para Torre
void moverTorre(int casas) {
    if (casas <= 0) return;
        printf("Direita\n");
        moverTorre (casas - 1);    
}

//função recursiva para Rainha
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha (casas - 1);
}

//função recursiva para o Bispo
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima\n");
    printf("Direito\n");
    moverBispo (casas - 1);
}

//movimento Cavalo em L
void moverCavalo(){
    printf("\nMovimentação do Cavalo:\n");
    for(int i = 0; i < Mov_Cavalo_Vertical; i++){
        for(int j = 0; j < Mov_Cavalo_Horizontal; j++) {
            if (i % 2 == 0 && j % 2 == 1) {
                printf("cima\n");
                printf("Cima\n");
                printf("Direita\n");
                break;
            }else {
                continue;
            }
        }
    }
}

//movimento do Bispo com loops aninhados
void moverBispo (){
    printf("\nMovimentação do Bispo:\n");
    for (int i = 0;  i < Mov_bispo; i++) {
        for (int j = 0; j < 1; j++) {
            printf("Cima\n");
            printf("Direita\n");
        }
    }
}
int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("\nMovimentação do Bispo:\n");
    moverBispo(Mov_bispo);
    
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    printf("\nMovimentação da Torre:\n");
    moverTorre(Mov_torre);

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    printf("Movimentação da Rainha:\n");
    moverRainha(Mov_rainha);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

     // Bispo (recursivo)
     printf("\nMovimentação do Bispo (Recursiva):\n");
     moverBispoRecursivo(Mov_bispo);
 
     // Cavalo (loops complexos)
     moverCavalo();
 
     // Bispo (loops aninhados)
     moverBispo();

    return 0;
}
