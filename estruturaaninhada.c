#include <stdio.h>

int main(){
    int numero;
     printf("Verificador de números!!!!\n");
     scanf("%d",&numero);

     if(numero > 0){
        if(numero % 2 == 0){
        printf("O númeor é positvo!\n");
        printf("O número e par!\n");
        }else {
            printf("O número é impar!\n");
        }
     }else if(numero == 0 ){
        printf("O número é 0!\n");
       }
     else {
        printf("Número é negativo!\n");
     }
     return 0;
}