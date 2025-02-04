#include <stdio.h>
int main (){
    int num1,num2,maior;

    printf("Digite primeiro número.\n");
    scanf("%d",&num1);
    printf("Digite segundo número.\n");
    scanf("%d",&num2);

    num1 > num2 ? (maior = num1) : (maior = num2);

    printf("O maior número é: %d\n", maior);
    

}