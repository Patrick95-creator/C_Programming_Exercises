#include<stdio.h>
#include<stdlib.h>
#include "readtext.c"

int readint(){

    int zahl = 0;

    char *zeichen = readtext();

    int i = 0;

    if (zeichen[0] == '+' || zeichen[0] == '-'){
        i = 1;
    }

    while (zeichen[i] != '\0'){

        if ((zeichen[i]-'0') >= 0 && (zeichen[i]-'0') <= 9){
            zahl = zahl * 10 + zeichen[i] - '0';
        }
        else{
            break;
        }

        i++;
    }

    if (zeichen[0] == '-'){
        zahl *= -1;
    }

    free(zeichen);

    return zahl;
}

int main(){

    printf("Gib eine Zahl ein:\n");

    int zahl = readint();

    printf("Die eingelesene Zahl ist %d\n", zahl);

    return 0;
}
