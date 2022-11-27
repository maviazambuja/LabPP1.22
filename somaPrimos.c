
#include <stdio.h>
#include <stdbool.h>

bool ehPrimo (int comec , fin);

int main (void) {
    int comec , fin, soma;
    soma = 0;
    printf("digite o valor inicial :");
    scanf("%d", &comec);
    printf("digite o valor final: ");
    scanf("%d", &fin);
    while (comec <= fin) {
        soma = soma + comec;
        comec++;
    }
    printf("a soma dos primos é: ")

 // funçao que verifica a divisao para saber se e primo (somente divisivel por ele mesmo e por 1)
 bool ehPrimo (int n) {
    for (int i = 2; i < n; i++) {
        if(n % i == 0) {
        return false;
        }
    }
    return true;
 }
 

}