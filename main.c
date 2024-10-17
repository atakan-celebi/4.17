#include <math.h>
#include <stdio.h>

int main(void) {
    int n, n1, i, nn, somma=0;
    printf("quante operazioni devi fare?\n");
    scanf("%d", &nn);
    for (i=0;i<nn;i++) {
        printf("\ninserisci il numero da sommare:");
        scanf("%d", &n);
        somma = somma + abs(n);
        printf("\nla somma e': %d", somma);
    }
}
