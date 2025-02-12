#include <stdio.h>
#include <string.h>
//um registro para definir as váriaveis necessárias para cada carta
    typedef struct{
        char nome_cidades[30];
        int populacao;
        double area;
        double pib;
        int pontoturistico;
    }cidades;

    typedef struct{
        char nome_estados[30];
        cidades cidades[4];
    }estados;

    
    //função principal
    int main() {

    //array para cada estados
        estados estados[8];
    //declaração para nome do país
        char pais[30];
    //descrição inicial do jogo
        printf("Bem vindo ao Super Trunfo - Países!\n");
        printf("Nesse jogo você tem o objetivo de criar estados de países e disputar com seus amigos para comparar quem tem as melhores estados.\n");
        printf("Você começa escolhendo o país, em seguida você deverá escolher 8 estadoss e 4 cidadess de cada estados. Os pontos serão calculados com base nos dados de cada cidades. Quem tiver a maior pontuação vence!.\n");
        printf("Digite o nome do País:\n");
        fgets(pais, sizeof(pais), stdin);
        printf("Seu país é: %s", pais);

    //lógica do jogo
    for (int i=0; i<8; i++){
        printf("Nome do estados %d:\n", i + 1);
        fgets(estados[i].nome_estados, sizeof(estados[i].nome_estados), stdin);
        //limpa o \n da memória
        estados[i].nome_estados[strcspn(estados[i].nome_estados, "\n")] = '\0';
        
            for (int j=0; j<4; j++){
                printf("Nome da cidades %d:\n", j + 1);
                fgets(estados[i].cidades[j].nome_cidades, sizeof(estados[i].cidades[j].nome_cidades), stdin);
                estados[i].cidades[j].nome_cidades[strcspn(estados[i].cidades[j].nome_cidades, "\n")] = '\0';

                printf("Número da população\n");
                scanf("%d", &estados[i].cidades[j].populacao);

                printf("Tamanho da área\n");
                scanf("%lf", &estados[i].cidades[j].area);

                printf("Número do PIB\n");
                scanf("%lf", &estados[i].cidades[j].pib);

                printf("Número de pontos turísticos\n");
                scanf("%d", &estados[i].cidades[j].pontoturistico);

                getchar();
            };
    };

    //Mostrar dados do jogo
    printf("Dados das estados do %s\n", pais);
        for (int i=0; i<8; i++){
            printf("Nome do estados %i: %s\n", i + 1, estados[i].nome_estados);

            for (int j=0; j<4; j++){
                printf("Nome da cidades: %s\n", estados[i].cidades[j].nome_cidades);
                printf("População: %i\n", estados[i].cidades[j].populacao);
                printf("Área: %.2lf\n", estados[i].cidades[j].area);
                printf("PIB: %.2lf\n", estados[i].cidades[j].pib);
                printf("Pontos Turísticos: %i\n", estados[i].cidades[j].pontoturistico);
            };
        };

        return 0;
    };
