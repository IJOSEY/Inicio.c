#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main () {

    int opcao;
    double nota1, nota2, media;

    printf("#### GESTÃO DE ESTUDANTES #### \n\n");
    printf("1°.Calcular a média.\n");
    printf("2°.Determinar Status.\n");
    printf("3°.Sair\n");
    printf("Escolha uma dessas opções:\n");
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1:
        printf("Calcular a média.\n");
        printf("Digite a sua 1° nota: \n");
        scanf("%lf",&nota1);
        printf("Digite a sua 2° nota: \n");
        scanf("%lf",&nota2);
        //condição para validação da nota 
        if((nota1 >= 0 && nota2 <= 10) && (nota2 >= 0 && nota2 <= 10)){
            printf("Entrada de dados válida!!!\n");
            media = (nota1 + nota2)/2;
            printf("Média do aluno é: %2.f\n",media);
        }else {
            printf("Entrada de notas com valores invalidaos!!\n");
        }
        break;
    case 2:
            printf("Determinar Status.\n");
            printf("Digite a sua média: ");
            scanf("%lf",&media);
            //teste operador ternário simplificando.
            //media >= 5 ? printf("Aprovado!\n") : printf("Reprovado!\n"); 
            if (media >= 7)
            {
                printf("Aprovado!\n");
            }
            else if (media >= 5 && media < 7 )
            {
                printf("Recuperação!\n");
            }
            else
            {
                printf("Reprovado!\n");
            }
            
             
        break;
    case 3:
        printf("Saindo Programa!.....");
        break;    
    default:
        printf("Opção Invalida!");
        break;
    }
    return 0;
}