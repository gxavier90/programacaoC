#include <stdio.h>

int main(){

/*
Atribuição simples (=)
Atrubuição com soma (+=)
Atrubuição com subtração (-=)
Atrubuição com multiplicação (*=)
Atrubuição com divisão (/=)
*/

int numero1 = 5, numero2, resultado;

resultado = 10;
printf("resultado: %d\n\n", resultado);

// resultado = resultado + 20
resultado += 20;
printf("resultado: %d\n\n", resultado);

//resultado = resultado - numero1
resultado -= numero1;
printf("resultado: %d\n\n", resultado);

resultado *= 5;
printf("resultado: %d\n\n", resultado);

resultado /= 15;
printf("resultado: %d\n\n", resultado);

return 0;

}