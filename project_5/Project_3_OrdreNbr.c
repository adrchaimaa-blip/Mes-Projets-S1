#include <stdio.h>

int main() {
    int n, i, c, cmp;
     printf("Combien de nombres voulez-vous entrer ? ");
     scanf("%d", &n);
    int nbr[n];
     printf("Entrez les %d nombres :\n", n);
    for (i = 0; i < n; i++) {
     scanf("%d", &nbr[i]);
    }
    for (i =0; i < n-1 ; i++) {
        for (c= i + 1; c< n; c++) {
            if (nbr[i] > nbr[c]) {
                cmp = nbr[i];
                nbr[i] = nbr[c];
                nbr[c] = cmp;
            }
        }
    }
    printf("\nLes nombres on ordre :\n");
    for (i = 0; i < n; i++) {
        printf("%d ", nbr[i]);
    }

    return 0;
}
