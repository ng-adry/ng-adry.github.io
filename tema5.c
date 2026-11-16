
#include <stdio.h>

int main() {
    int a, b;
    int s=0, p=1;
    float media;
    scanf("%d %d", &a, &b);
    s=a+b;
    p=a*b;
    media = (float)s/2;
    printf("Suma = %d\n", s);
    printf("Produsul = %d\n", p);
    printf("Media = %.2f\n", media);

    return 0;

  /*TESTAREA 1:
a = 5, b = -2
Suma = 3
Produs = -10
Media = 1.50

TESTAREA 2:
a = 7, b = 4
Suma = 11
Produs = 28
Media = 5.50
Folosim (float) pentru a evita impartirea intreaga.*/
}
