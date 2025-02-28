#include <stdio.h>
#include<locale.h>
#include<string.h>

int main() {

    setlocale(LC_ALL, "Portuguese");

    char estado[3]="PB";
    char nome[20]="recife";
    char COD_Cidade[6]="PB01";
    int Populacao=20;
    float area=21;
    float PIB=18;
    int Numero_de_pontos_turisticos = 28;

    printf("Digite o estado: \n");
    scanf("%s", estado);

    printf("Digite a cidade: \n");
    getchar();
    fgets(nome, 20, stdin);
    nome[strcspn(nome, "\n")]=0;

    printf("Digite o Código da cidade: \n");
    scanf("%s", COD_Cidade);

    printf("Digite a população: \n");
    scanf("%d", &Populacao);
    
    printf("Digite a área: \n");
    scanf("%f", &area);
    

    printf("Digite o PIB: \n");
    scanf("%f", &PIB);
    

    printf("Digite o número de pontos turísticos: \n");
    scanf("%d", &Numero_de_pontos_turisticos); 


    printf("Estado: %s \n", estado);
    printf("Cidade: %s \n", nome);
    printf("Código da cidade: %s \n", COD_Cidade);
    printf("População: %d \n", Populacao);
    printf("Área: %f km²\n", area);
    printf("PIB: R$%.2f bilhões\n", PIB);
    printf("Pontos turísticos: %d \n", Numero_de_pontos_turisticos);

    return 0;
}