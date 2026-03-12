#include <stdio.h>

int main() {
    int x = -12;
    int anzahl = 5;
    double kontostand = 543.21;
    printf("der Inhalt der Variablen x ist %d\n", -12);
    printf("der Inhalt der Variablen anzahl ist %d\n", 5);
    printf("der Inhalt der Variablen kontostand ist %.2f\n",kontostand);
    printf("die Summe von x und anzahl = %d\n",x+anzahl);
    printf("Die Summe aus x und anzahl und kontostand = %.2lf\n", x+anzahl+kontostand);
    printf("x= %d anzahl= %d kontostand = %.2lf \n x= %p anzahl = %p kontostand = %p\n", x,anzahl,kontostand,&x,&anzahl,&kontostand);
}
