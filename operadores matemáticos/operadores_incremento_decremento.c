# include <stdio.h>

int main() {

/*
Incremento (++)
Pré-incremento ++a
Pós-incremento a++
Decremento (--)
Pré-decremento --a
Pós-decremento a--
*/

int numero1 = 1, resultado;

printf("Antes do incremento: %d\n", numero1);
numero1++;
numero1+=10;
printf("Após o incremento: %d\n", numero1);

numero1--;
numero1-=10;
printf("Após o decremento: %d\n", numero1);

return 0;

}