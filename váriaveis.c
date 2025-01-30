#include <stdio.h>
int main(){
    int idade ;
    int quantidade ;
    float altura ;
    double peso ;
    char letra = 'c' ;
    char nome[20] ;

    printf("Digite a sua idade:\n");
    scanf("%d",&idade);

    printf("Digite a quantidade:\n");
    scanf("%d",&quantidade);

    printf("Digite a sua altura:\n");
    scanf("%f",&altura);

    printf("Digite seu peso:\n");
    scanf("%f",&peso);
// deixar espaço antes do modificador de valor evitar bug na leitura do dado
    printf("Digite uma letra:\n");
    scanf(" %c",&letra);

    printf("Digite o seu nome:\n");
    scanf("%s",&nome);

    printf("O nome é:%s\n",nome);
    printf("A idade é:%d\n",idade);
    printf("A quantidade é:%d\n",quantidade);
    printf("A altura é:%f\n",altura);
    printf("A peso é:%f\n",peso);
    printf("A letra é:%c\n",letra);
   

    return 0;

}