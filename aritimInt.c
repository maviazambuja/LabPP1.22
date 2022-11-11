/*Arquivo aritmInt.c
Matrícula: 12121ETE004
Nome: Maria Vitória Azambuja*/

include <stdio.h>

int main(void) {
// primeiramente declarando as variáveis
int primeiroInt, segundoInt ; 
    printf("Digite o primeiro inteiro: ");
    scanf("%d", &primeiroInt);
    printf("Digite o segundo inteiro: ");
    scanf("%d", &segundoInt);

//Operações aritméticas
    printf("%d + %d = %d" , primeiroInt , segundoInt , primeiroInt + segundoInt);
    printf("%d - %d = %d" , primeiroInt , segundoInt , primeiroInt * seguntoInt );
    printf("%d * %d = %d" , primeiroInt , segundoInt , primeiroInt * segundoInt);
    printf("%d / %d = %d", primeiroInt , segundoInt , primeiroInt / segundoInt);
    printf("%d%%%d = %d" , primeiroInt , segundoInt , primeiroInt % segundoInt);
            return 0;
}

