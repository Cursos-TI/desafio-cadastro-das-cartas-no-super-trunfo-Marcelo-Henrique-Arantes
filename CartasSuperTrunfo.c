#include <stdio.h>
//um registro para definir as váriaveis necessárias para cada carta
   typedef struct{
        char nome[50];
        char nomec[40];
        int populacao;
        float area;
        double pib;
        int pontoturistico;
    }carta;
    
    int main() {
    //variavel para nome do país
        char pais[20];
    //declaração de cada estado
        carta A, B, C, D, E, F, G, H;

        printf("Bem vindo ao Super Trunfo - Países!\n");
        printf("Nesse jogo você tem o objetivo de criar cartas de países e disputar com seus amigos para comparar quem tem as melhores cartas.\n");
        printf("Você começa escolhendo o país, em seguida você deverá escolher 8 estados e 4 cidades de cada estado. Os pontos serão calculados com base nos dados de cada cidade. Quem tiver a maior pontuação vence!.\n");
        printf("Digite o nome do País:\n");
        scanf("%c",&pais);
        printf("Seu país é: %c", pais);
        return 0;
    };