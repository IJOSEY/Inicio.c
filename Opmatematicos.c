#include <stdio.h>
int  main (){
    int numero1,numero2,resultado,opcao;

    printf("Digite o primeiro número:\n");
    scanf("%d",&numero1);
    printf("Digite o segundo número:\n");
    scanf("%d",&numero2);
    printf("Escolha a operação matemática que deseja realizar:\n");
    printf("Opção soma digite: 1\n");
    printf("Opção subtração digite: 2\n");
    printf("Opção multiplicação digite: 3\n");
    printf("Opção divisão digite: 4\n"); 
    
    scanf("%d",&opcao);

    switch (opcao)
    {
    case 1 :
        resultado = numero1 + numero2;
        printf("A soma dos números é:%d\n", resultado);
        break;
    case 2 :
        resultado = numero1 - numero2;
        printf("A s ubtração dos números é:%d\n", resultado);
        break;
    case 3 :
       resultado = numero1 * numero2;
        printf("A multiplicação dos números é:%d\n", resultado);
        break;
    case 4 :
        resultado = numero1 / numero2;
        printf("A divisão dos números é:%d\n", resultado);
        break;        
    default:
    printf("Opção invalida!!\n");
        break;
    }

}