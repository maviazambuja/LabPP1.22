//Maria Vitória Cardoso
//12121ETEoo4

#include <stdio.h>
#include <math.h>

int main (void) {
    double xa, ya , xb , yb, dist = 0 ; 
    printf("Digite uma coodenada para Xa e Ya: ");
    scanf("%lf %lf", &xa &ya);
    printf("Digite uma coodenada para Xb e Yb: ");
    scanf("%lf %lf", &xb &yb );
    
    dist = sqrt(pow(xa - xb),2) + (pow(ya -yb),2);

    printf("%lf\n", dist)

}