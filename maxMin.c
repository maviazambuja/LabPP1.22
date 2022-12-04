//Maria Vitoria Cardoso - 12121ETE004
// aula 3 - 4/12



#include<stdio.h>

int  main (void){
//declaradas
    int n, maxim = 0, minim = 0 ;
    printf ( "Numero de entradas: \n " );
    scanf ( " %d " , &n);
    int vetor[n];

    for ( int i= 0 ; i < n; i++) {
        printf ( "  %d numero: \t " ,i+ 1 );
        scanf ( " %d " , vetor+i);   
    }

    maxim = vetor[0];
    minim = vetor[0];



    for ( int i= 0 ; i < n; i++) {
    if (vetor[i] > maxim)
        maxim = vetor[i];
    
    if (vetor[i]< minim)
        minim = vetor[i];
    }
    
     for ( int i= 0 ; i < n; i++) {

        if (vetor[i] == maxim)
            printf ( " %d > " , maxim);
        if (vetor[i] == minim)
            printf ( " %d < " , minim);
        if (vetor[i] != max && vetor[i] != minim)
            printf ( " %d  " , vetor[i]);
    }

return  0 ;
}