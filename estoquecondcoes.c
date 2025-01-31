#include <stdio.h>
int main () {
    float temp;
    float umidade;
    unsigned int estoque;
    printf("**** Checagem de Estoque ****\n");

    printf("Qual a temperatura: \n");
    scanf("%f",&temp);
    printf("Taxa de umidade: \n");
    scanf("%f",&umidade);
    printf("Valor do estoque: \n");
    scanf("%u",&estoque);

    if (temp <= 30 && temp >= 10 &&
        umidade >= 10 && umidade <=40 &&
        estoque >= 100)
    {
      
      printf("O estoque está ideal e em boas condições! \n"); 
    }
    else if (umidade < 9 || umidade > 41)
    {
     printf("Alerta umidade irregular!!! \n"); 
    } 
    else if (temp > 31 || temp < 9)
    {
      printf("Alerta a temperatura está irregular!!! \n");
    } 
    else
    {
      printf("As condições do estoque tem de ser revisadas! \n");
    }
    
    return 0;
}