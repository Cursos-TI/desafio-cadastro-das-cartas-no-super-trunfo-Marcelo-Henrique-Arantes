#include <stdio.h>
//um registro para definir as váriaveis necessárias para cada carta
   typedef struct{
        char nome_estado[30];
        char nome_cidade[30];
        int populacao;
        float area;
        double pib;
        int pontoturistico;
    }carta;
    
    int main() {

    //declaração de cada estado
        carta A, B, C, D, E, F, G, H;
        char pais[30];

        printf("Bem vindo ao Super Trunfo - Países!\n");
        printf("Nesse jogo você tem o objetivo de criar cartas de países e disputar com seus amigos para comparar quem tem as melhores cartas.\n");
        printf("Você começa escolhendo o país, em seguida você deverá escolher 8 estados e 4 cidades de cada estado. Os pontos serão calculados com base nos dados de cada cidade. Quem tiver a maior pontuação vence!.\n");
        printf("Digite o nome do País:\n");
        fgets(pais, sizeof(pais), stdin);
        printf("Seu país é: %s", pais);

        printf("Nome do primeiro estado\n");
        fgets(A.nome_estado, sizeof(A.nome_estado), stdin);
        printf("Nome da cidade\n");
        fgets(A.nome_cidade, sizeof(A.nome_cidade), stdin);
        printf("Número da população\n");
        scanf("%i", &A.populacao);
        printf("Tamanho da Área da cidade\n");
        scanf("%f", A.area);
        printf("PIB da cidade\n");
        scanf("%d", &A.pib);
        printf("Número de pontos turísticos\n");
        scanf("%i", &A.pontoturistico);

        return 0;
    };