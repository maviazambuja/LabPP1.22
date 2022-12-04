//Maria Vitoria Cardoso - 12121ETE004
//aula 3; 4/12


#include  < stdio.h >

int  main (void) {

    int k, n = 0 ;
    printf ( "Quantidade de inteiros desejados: \n " );
    scanf ( " %d " , &k);

    int vetor[n];

    for ( int i= 0 ; i < k; i++) {
        printf ( " %d numero: \t " ,i+ 1 );
        scanf ( " %d " , vetor+i);
    }

    printf ( " Digite o numero que vc quer verificar: \n " );
    scanf ( " %d " , &n);

    for ( int i= 0 ; i < k; i++) {
        if (n% vetor[i])
            printf ( " %d  " , vetor[i]);
        if (!(n% vetor[i]))
            printf ( " %d # " , vetor[i]);
    }

return  0 ;
}