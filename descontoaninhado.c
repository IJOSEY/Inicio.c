#include <stdio.h>
int main () {
    int idade;
    float renda;
   
    printf("Digite a sua idade: \n");
    scanf("%d",&idade);  

    printf("Digite sua renda mensal: \n");
    scanf("%f", &renda);

    if(idade <= 18 || idade >= 60)
    {
       printf("Aceito com relação a idade!\n"); 
     if(renda < 2000)
    {
       printf("Você atende aos requisitos do desconto!\n");
    }
     else
    {
       printf("Você está fora dos requesitos do desconto devido a renda!\n");
    }
    }
    else
     {
       printf("Você não tem idade necessária!\n");
     }
    
    
    return 0;
}