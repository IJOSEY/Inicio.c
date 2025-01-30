#include <stdio.h>

float main(){
    float nota1, nota2, media;
    char nome[20];

    printf("***Calcule sua média***\n");

    printf("Informe seu nome:\n");
    scanf("%s", &nome);

    printf("Informe 1° nota:\n");
    scanf("%f", &nota1);

    printf("Informe a 2° nota:\n");
    scanf("%f", &nota2);

    media = (nota1 + nota2) /2;

    printf("Caro aluno %s \n",&nome);
    printf("A sua média é: %2.f\n",media);
    
    return 0;
}