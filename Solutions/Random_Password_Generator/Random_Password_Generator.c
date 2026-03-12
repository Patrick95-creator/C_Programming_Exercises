#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {

    srand(time(NULL));

    char mzeichen[] = {'a','b','c','d','e','f','h','i','m','n','q','r','t',
                       'A','B','C','D','E','F','G','H','L','M','N','Q','R','T',
                       '2','3','4','6','7','8'};

    char passwort[9];

    int überprüfe = 3;

    while (überprüfe >= 1){

        int hilf[] = {1,1,1};

        int i = 0;

        while (i < 8){

            passwort[i] = mzeichen[rand() % 33];

            if (passwort[i] >= 'a' && passwort[i] <= 't'){
                hilf[0] = 0;
            }
            else if (passwort[i] >= 'A' && passwort[i] <= 'T'){
                hilf[1] = 0;
            }
            else if (passwort[i] >= '2' && passwort[i] <= '8'){
                hilf[2] = 0;
            }

            i++;
        }

        überprüfe = hilf[0] + hilf[1] + hilf[2];
    }

    passwort[8] = '\0';

    printf("%s\n", passwort);

    return 0;
}
