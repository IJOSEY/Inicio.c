#include <stdio.h>
int main () {
    
    int num1, num2;

    printf("Digite o 1° numero: \n");
    scanf("%d",&num1);
    
    printf("Digite o 2° numero: \n");
    scanf("%d",&num2);

    if (num1 > num2){

       printf("O 1° número: %d, é maior que 2° número: %d \n", num1, num2);
    }
    else if (num1 == num2) {
       
       printf("O 1° número: %d, é igual que 2° número: %d \n", num1, num2);
    }
    else {

        printf("O 1° número: %d, é menor que 2° número: %d \n", num1, num2);
    }
    
    return 0;
}