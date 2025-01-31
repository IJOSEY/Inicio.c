#include <stdio.h>
int main (){
    int a , b;
     
     printf("Digite um número: \n");
     scanf("%d",&a);
     //printf("Digite outro número: \n");
     //scanf("%d",&b);

//teste com && lógico
/*if (a > 0 && b > 0)
{
    printf("Os números são positívos \n");
}
else{
    printf("Pelo menos um dos números não é positivo!\n");
}
*/
/*Teste com || lógico 
if(a > 0 || b > 0)
{
printf("Pelo menos um dos números é positivo! \n");
}
else 
{
printf("Ambos números são negattivos! \n");    
}*/
if(!(a == 0) )
{
   printf("O número é 0! \n");
}
else 
{
   printf("O é diferente de 0! \n"); 
}
return 0;
}