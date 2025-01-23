#include <stdio.h>
int main(){
    int idade = 25;
    int quantidade = 1;
    float altura = 1.75;
    double peso = 90.5;
    char letra = 'a';
    char nome[20] = 'ijosey';

    printf("Digite a sua idade:\n");
    scanf("%d",&idade);

    printf("Digite a quantidade:\n");
    scanf("%d",&quantidade);

    printf("Digite a sua altura:\n");
    scanf("%f",&altura);

    printf("Digite seu peso:\n");
    scanf("%f",&peso);

    printf("Digite uma letra:\n");
    scanf("%c",&letra);

    printf("Digite o seu nome:\n");
    scanf("%s",&nome);

    printf("A idade é:%d\n",idade);
    printf("A quantidade é:%d\n",quantidade);
    printf("A altura é:%f\n",altura);
    printf("A peso é:%f\n",peso);
    printf("A letra é:%c\n",letra);
    printf("O nome é:%s\n",nome);


    return 0;

}