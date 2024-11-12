#include <stdio.h>

int main(){
    int primo, secondo, risultato;
    float media;
    
    printf("\nInserisci il primo numero intero: ");
    scanf("%d", &primo);

    printf("\nInserisci il secondo numero intero: ");
    scanf("%d", &secondo);
    

    risultato = primo + secondo;
    media = risultato / 2.0;

    printf("La media aritmetica tra %d e %d è %.2f.\n", primo, secondo, media);
    
    return 0;
}
