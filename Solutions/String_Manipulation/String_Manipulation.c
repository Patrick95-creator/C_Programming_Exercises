#include<stdio.h>
#include<stdlib.h>
#include "readtext.c"
// 3.1
void ganzahl(char *zeichen){
    int i = 0;
    while (zeichen[i] != '\0'){
        i++;

    }printf("Die Zeichenkette hat %d zeichen\n",i);


}
// 3.2
void buchstabea(char *zeichen){
    printf("nach welchen Buchstabe soll gesucht werden?\n");
    char buchstabe;
    scanf("%c",&buchstabe);
    int anzahl = 0;
    int i = 0;
    while (zeichen[i] != '\0'){
        if (zeichen[i] == buchstabe){
            anzahl++;
        }
        i++;
    }
    printf("Die Zeichenkette \"%s\" sowie das Zeichen '%c' sind gegeben Ergebnis ist %d\n",zeichen,buchstabe,anzahl);
}
// 3.3
void kopie(char *zeichen){
    char *kzeichen = malloc(1);
    int i =0;
    if (kzeichen == NULL){
        free(kzeichen);
        fprintf(stderr,"Speicher konnte nicht zugewiesen werden");
        exit(EXIT_FAILURE);
    }
    while (zeichen[i] != '\0'){
        kzeichen = realloc(kzeichen,i+2);
            if (kzeichen == NULL){
                free(kzeichen);
                fprintf(stderr,"Speicher konnte nicht erweitert werden");
                exit(EXIT_FAILURE);
            }
        kzeichen[i] = zeichen[i];
        i++;
    }
    kzeichen[i] = '\0';
    kzeichen = realloc(kzeichen,i);
    if (kzeichen == NULL){
        free(kzeichen);
        fprintf(stderr,"Speicher konnte nicht erweitert werden");
        exit(EXIT_FAILURE);
    }
    printf("die kopierte Zeichenkette lautet \"%s\"",kzeichen);
}
// 3.4
char* spiegel(char *zeichen){

    int i = 0;

    while(zeichen[i] != '\0'){
        i++;
    }

    int len = i;

    char *neu = malloc(len + 1);

    int j = 0;

    while(len > 0){
        neu[j] = zeichen[len-1];
        j++;
        len--;
    }

    neu[j] = '\0';

    return neu;
}
// 3.5
char* ascii_plus(char *zeichen){

    int i = 0;

    char *neu = malloc(1);

    while(zeichen[i] != '\0'){

        char *tmp = realloc(neu, i+2);

        if(tmp == NULL){
            free(neu);
            exit(EXIT_FAILURE);
        }

        neu = tmp;

        neu[i] = zeichen[i] + 1;

        i++;
    }

    neu[i] = '\0';

    return neu;
}
//3.6
char* palindrom(char *zeichen){

    int len = 0;

    while(zeichen[len] != '\0'){
        len++;
    }

    char *neu = malloc(len*2 + 1);

    int i = 0;

    while(i < len){
        neu[i] = zeichen[i];
        i++;
    }

    int j = len-1;

    while(j >= 0){
        neu[i] = zeichen[j];
        i++;
        j--;
    }

    neu[i] = '\0';

    return neu;
}
