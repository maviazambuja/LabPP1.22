//Maria Vitória Cardoso
//12121ETE004

#include <stdio.h>
#include <math.h>

int main(void) {
    double xa, ya , xb , yb, area = 0, xc, yc; 
    printf("Digite uma coodenada para o ponto A: ");
    scanf("%lf %lf", &xa &ya);
    printf("Digite uma coodenada para o ponto B: ");
    scanf("%lf %lf", &xb &yb );
    xc = (xa - xb);
    yc = (ya - yb);
    area = (xc*yc)/2 ;



    printf("%lf\n", area);



}