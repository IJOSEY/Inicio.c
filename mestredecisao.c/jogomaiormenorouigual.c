#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    //Variáveis. 
    int numjogador,numcomputador,resultado;
    char opcao;
    //Gerador de número aleatório.
    srand(time(0));
    
    numcomputador = rand() % 100 +1;//Número de 1 à 100.

    printf("****JOGO MAIOR, MENOR OU IGUAL****\n\n");
    printf("Bem vindo, ao jogo maior, menor ou igual!\n");
    printf("Você deve escolher um número eo tipo de comparação.\n");
    printf("M_ Maior!\n");
    printf("N_ Menor!\n");
    printf("I_ Igual!\n");

    // Escolha da comparação.
    printf("Escolha o tipo de comparação: \n");
    //espaço antes do especificador ( %c) de formato para evitar erro de leitura do valor.
    scanf(" %c",&opcao);

    // Escolha usuário. 
    printf("Digite seu Número (entre 1 e 100): \n");
    scanf("%d",&numjogador);
    
    //lógica
    switch (opcao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu opção Maior.\n");
        //teste comparando numeros com operador ternário.
        resultado = numjogador > numcomputador? printf("Você Venceu!\n"): printf("Você perdeu!\n");
        //exposição das escolhas.
        printf("Número do jogador é: %d e número do computador é %d \n",numjogador,numcomputador);
        break;
    case 'N':
    case 'n':
        printf("Você escolheu opção Menor.\n");
        resultado = numjogador < numcomputador? printf("Você Venceu!\n"): printf("Você perdeu!\n");
        printf("Número do jogador é: %d e número do computador é %d \n",numjogador,numcomputador);
        break;
    case 'I':
    case 'i':
        printf("Você escolheu opção Igual.\n");
        resultado = numjogador == numcomputador? printf("Você Venceu!\n"): printf("Você perdeu!\n");
        printf("Número do jogador é: %d e número do computador é %d \n",numjogador,numcomputador);
        break;    
    default:
        printf("Opção Inválida!\n");
        break;
    }

}