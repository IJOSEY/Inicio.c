#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int opcao,regra;
    int escolhajogador,escolhacomputador;
    printf("****JOKENPO****\n\n");
    printf("Escolha uma das opções abaixo: \n");
    printf("1°- Iniciar jogo!\n");
    printf("2°- Regras do jogo!\n");
    printf("3°- Saior do jogo!\n");
    printf("Digite número da opção de sua escolha!\n");
    scanf("%d",&opcao);
    switch (opcao)
    {
    case 1:
        srand(time(0));
        escolhacomputador = rand() % 3 + 1;
        printf("Escolha uma das opções a seguir:\n");
        printf("1°- PAPEL!\n");
        printf("2°- PEDRA!\n");
        printf("3°- TESOURA!\n");
        printf("Escolha: ");
        scanf("%d",&escolhajogador);
        //código com if comentado
        /*if (escolhacomputador == escolhajogador)
        {
            printf("***EMPATE***");
        }
        else if ((escolhacomputador) == 1 && (escolhajogador ==2) ||
                 (escolhacomputador == 2) && (escolhajogador == 3) ||
                 (escolhacomputador == 3) && (escolhajogador == 1))
        {
            printf("O computador venceu!!\n");
            printf("A escolha do computador foi: %d\n",escolhacomputador);
            printf("A escolha do jogador foi: %d\n",escolhajogador);
        }
        else
        {
            printf("O jogador venceu!!\n");
            printf("A escolha do computador foi: %d\n",escolhacomputador);
            printf("A escolha do jogador foi: %d\n",escolhajogador);
        }
        */
        switch (escolhajogador)
        {
        case 1:
            printf("O jogador escolheu PAPEL!!\n");
            break;
        case 2:
            printf("O jogador escolheu PEDRA!!\n");
            break;
        case 3:
            printf("O jogador escolheu TESOURA!!\n");
            break;    
        default:
            printf("Opção invalida!!\n");
            break;
        }
        switch (escolhacomputador)
        {
        case 1:
            printf("O computador escolheu PAPEL!!\n");
            break;
        case 2:
            printf("O computador escolheu PEDRA!!\n");
            break;
        case 3:
            printf("O computador escolheu TESOURA!!\n");
            break;   
            if (escolhacomputador == escolhajogador)
            {
                printf("#####JOGO EMPATOU!!######\n");
            }
            else if ((escolhacomputador) == 1 && (escolhajogador ==2) ||
                 (escolhacomputador == 2) && (escolhajogador == 3) ||
                 (escolhacomputador == 3) && (escolhajogador == 1))
            {
                printf("O computador venceu!!\n");
                
            }
            else
            {
                printf("O jogador venceu!!\n");
                
            }
             
        }
        break;
    case 2:
        printf("Regras de 1 a 10!\n");
        printf("Digite o número da regra: ");
        scanf("%d",&regra);
        switch (regra)
        {
        case 1:
            printf("Primeira regra é .......\n");
            break;
        case 2:
            printf("Segunda regra é .......\n");
            break;
        case 3:
            printf("Terceira regra é ........\n");
            break;
        case 4:
            printf("Quarta regra é.......\n");
            break;
        case 5:
            printf("Quinta regra é .........\n");
            break;
        case 6:
            printf("Sexta regra é ........\n");
            break;
        case 7:
            printf("Sétima regra é .......\n");
            break;
        case 8:
            printf("Oitava regra é .......\n");
            break;
        case 9:
            printf("Nona regra é .......\n");
            break;
        case 10:
           printf("Décima regra é ........\n");
            break;                                
        default:
            printf("Opção invalida regra não existe!\n");
            break;
        }
        break;
    case 3:
        printf("FINALISANDO JOGO......!\n");
        break;    
    default:
        printf("Opção Invalida!!!\n");
        break;
    }
}