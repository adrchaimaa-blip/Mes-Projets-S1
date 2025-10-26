#include <stdio.h>

int main() {
    float mt, mtR, mtF;
    char statut;

    printf("Donner le montant: ");
    scanf("%f", &mt);
    printf("Donner le statut:" "(G=GOLD, S=SLVER, R=REIN)");
    scanf(" %c", &statut);
    if (statut == 'G' || statut == 'g') {
        mtR = 0.15 * mt;}
    else if (statut == 'S' || statut == 's') {
        mtR = 0.10 * mt; }
    else {
        mtR = 0;}
     mtF = mt - mtR;
    printf("Le montant final est : %.2f\n", mtF);
    return 0;
}
