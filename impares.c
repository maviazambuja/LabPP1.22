//intervalos entra a e b (íncluídos), imprimir os impares
// a>b é true 

#include<stdio.h>

int main (void) {
    int comec , fin, imp ;
    imp = 0 ;
    printf("digite o valor inicial :");
    scanf("%d", &comec);
    printf("digite o valor final: ");
    scanf("%d", &fin);
    while (comec <= fin){
        if (comec % 2 != 0);
            imp ++;

    }
printf("%d", imp)

}

