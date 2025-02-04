#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main (){
    int opcao;
    int numerosecreto,palpite;

    printf("****MENU DO GAME****\n\n");
    printf("Escolha uma das seguintes opções!\n");
    printf("1.-Iniciar jogo!\n");
    printf("2.-Regras do jogo!\n");
    printf("3.-Sair do jogo!\n");
    printf("Digite o número da opção:\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        srand(time(0));
        numerosecreto = rand() % 10;
        printf("INICIALISANDO JOGO!\n");
        printf("Digite um número de 1 a 9.\n");
        scanf("%d",&palpite);
        
        if (palpite == numerosecreto)
        {
        printf("****O JOGADOR ACERTOU!****\n ");
        printf("****númerojogador: %d****\n ",palpite);
        printf("****númerocomputador: %d****\n ",numerosecreto);
        }
        else
        {
        printf("****O JOGADOR ERROU!****\n ");
        printf("****númerojogador: %d****\n ",palpite);
        printf("****númerocomputador: %d****\n ",numerosecreto);
        }
        
        break;
    case 2:
        printf("1°regra!\n");
        printf("2°regra!\n");
        printf("3°regra!\n");
        break;
    case 3:
        printf("AND GAME!!!!\n");
        break;        
    
    default:
    printf("Opção invalida!\n");
        break;
    }
    return 0;
}