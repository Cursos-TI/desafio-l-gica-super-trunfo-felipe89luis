#include <stdio.h>

int main(){
    char carta1[2] = "E"; 
    char carta2[3] = "RJ";
    char carta3[50] = "Sao Paulo";
    int populacao = 3833712;
    float area = 6095583;
    float pib = 2302;
    int pontos = 30;
    int resultado;
    int valor1 = 1000;
    int valor2 = 2000;
    
    printf("Digite o nome da carta1: \n");
    scanf("%s", carta1);

    printf("Digite a carta2: \n");
    scanf("%s", carta2);

    printf("Digite a carta3: \n");
    scanf("%s", carta3);

    printf("Digite a população: \n");
    scanf("%d", &populacao);

    printf("Digite a area: \n");
    scanf("%f", &area);

    printf("Digite o pib: \n");
    scanf("%f", &pib);

    printf("Digite os pontos: \n");
    scanf("%d", &pontos);

    resultado = populacao * pib;

    printf("O resultado da multiplicação de população por PIB é: %.0f\n", resultado);

    if(populacao < pib){
        printf("A população de Espirito Santo é menor que o pib\n");
    } else {
        printf("A população de Espirito Santo é maior que o pib\n");
    }

    printf("\nComparação de cartas (População: %d):\n", populacao);  
    printf("Carta1 - %s (%s): %d\n", carta1, carta2, valor1);  
    printf("Carta2 - %s (%s): %d\n", carta1, carta2, valor2);  

    
    if (valor1 > valor2) {
        printf("Resultado: Carta1 (%s) venceu!\n", carta1);
    } else if (valor2 > valor1) {
        printf("Resultado: Carta2 (%s) venceu!\n", carta2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}



