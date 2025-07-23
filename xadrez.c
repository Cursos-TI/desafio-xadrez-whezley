#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

//Adiciona recursividade para movimentação do Bispo
void movimentarBispo(int casas) {
    if (casas > 0) {
        printf("Movendo o Bispo para a diagonal superior direita...\n");
        
        movimentarBispo(casas-1);
    }

}

void movimentarTorre(int casas) {
    if (casas > 0) {
        printf("Movendo a Torre para a direita...\n");
        
        movimentarTorre(casas-1);
    }
}

void movimentarRainha(int casas) {
    if (casas > 0) {
        printf("Movendo a Rainha para a esquerda...\n");
        
        movimentarRainha(casas-1);
    }
}

void movimentarCavalo(int casas) {
    if (casas > 0) {
        printf("Movendo o Cavalo para baixo...\n");
        if(casas == 1) {
            printf("Movendo o Cavalo para a esquerda...\n");
        }
        movimentarCavalo(casas-1);
    }
}   

int main() {
   
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    const char BISPO[] = "DIAGONAL SUPERIOR DIREITA(BISPO)";
    const char TORRE[] = "DIREITA(TORRE)";
    const char RAINHA[] = "ESQUERDA(RAINHA)";
    const char CAVALO[] = "BAIXO(CAVALO)";
    int opcao;
    int casasBispo = 5; // Número de casas que o Bispo pode se mover
    int casasTorre = 5; // Número de casas que a Torre pode se mover
    int casasRainha = 8; // Número de casas que a Rainha pode se mover
    int casasCavalo = 4; // Número de casas que o Cavalo pode se mover

    //Laco DO/WHILE para escoler qual peca mover
    do
    {
       printf("Qual peca voce quer mover?\n");
       printf("1 - BISPO\n");
       printf("2 - TORRE\n");
       printf("3 - RAINHA\n");
       printf("4 - CAVALO\n");
       printf("5 - EXECUTAR TODAS RECURSIVAMENTE\n");
       printf("0 - SAIR\n");

printf("Digite:\n");
       scanf("%d", &opcao);
    
    if ((opcao < 0) || (opcao > 5))
    {
        printf("Opcao invalida...");
        continue;
    }
    
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    if (opcao == 1){
        for (int i = 0; i <= 5; i++){
            printf("%s\n", BISPO);
        }continue;}
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    if(opcao == 2){
        for (int i = 0; i <= 5; i++){
            printf("%s\n", TORRE);
        }continue;}

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    if(opcao == 3){
        for (int i = 0; i <= 8; i++){
            printf("%s\n", RAINHA);

        }continue;}

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L
    // Um loop pode representar a movimentação horizontal e outro vertical.
    // Verifica se a opção escolhida é o Cavalo
    if (opcao == 4){
        for ( int i = 0; i == 0; i++){
            for (int j = 0; j <= 4; j++ )
            { 
                printf("%s\n", CAVALO);  
            }
        printf("ESQUERDA ");
        printf("ESQUERDA(CAVALO)\n");
        
        }}
    if(opcao == 5) {
        printf("Executando funcoes recursivas...\n");
        
    
    //Essa inicializacao executa as funcoes recursivas para movimentar as peças
movimentarBispo(casasBispo); // Chamada inicial para movimentar o Bispo
movimentarTorre(casasTorre); // Chamada inicial para movimentar a Torre 
movimentarRainha(casasRainha); // Chamada inicial para movimentar a Rainha1
movimentarCavalo(casasCavalo); // Chamada inicial para movimentar o Cavalo
continue;
}
} while (opcao!=0);

    

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
