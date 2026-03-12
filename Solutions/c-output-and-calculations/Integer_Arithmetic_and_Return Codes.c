#include <stdio.h>
int main(){
    printf("Bitte ein Moment warten. Ich rechne...");
    int x = 10;
    int y = 20;
    int z = 30;
    printf("Die summe von x,y und z lautet %d\n", x+y+z);
    int summe = x*y/z;
    printf("x*y/z=%d\n",summe);
    double rsumme = (double)(x*y)/z - summe;

    printf("der Rundungsfehler ist %lf\n",rsumme);
    return 0;

}
