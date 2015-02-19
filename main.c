#include <stdio.h>
#include <stdlib.h>
#define N 5

int main(int argc, char** argv) {
    float media;
    int massimo,minimo,presidenti;
    int vettoreEta[N];
    int etaPresidente = 50;
    int i;
    
    printf("Inserisci l'eta' di %d persone\n", N);
    
    for(i=0;i<N;i++) {
        printf("Inserisci l'eta' della %da persona: ", i+1);
        scanf("%d", &(vettoreEta[i]));
        minimo = vettoreEta[0];
        
        if(vettoreEta[i]>=massimo) {
            massimo = vettoreEta[i];
        }
        if(vettoreEta[i]<minimo) {
            minimo = vettoreEta[i];
        }
        
        media += vettoreEta[i];
        
        if(vettoreEta[i]>=etaPresidente) {
            presidenti += 1;
        }
    }
    media /= N;
    
    printf("\nEta' media: %f", media);
    printf("\nEta' massima: %d", massimo);
    printf("\nEta' minima: %d", minimo);
    printf("\nNumero di potenziali Presidenti della Repubblica: %d", presidenti);
    return (EXIT_SUCCESS);
}

