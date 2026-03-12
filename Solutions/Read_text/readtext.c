#include <stdlib.h>
#include <stdio.h>

char* readtext() {
    int puffergroesse = 10;
    char* puffer = malloc(puffergroesse);
    if(puffer == NULL){
        free(puffer);
        fprintf(stderr,"fehler, speicher konnte nicht reserviert werde");
        exit(EXIT_FAILURE);
    }
    int eingabepos = 0;
    char eingegebenes_zeichen;
    do {
        eingegebenes_zeichen = getchar();
    if (eingegebenes_zeichen != '\n') {
        puffer[eingabepos] = eingegebenes_zeichen;
        eingabepos++;
        if (eingabepos == puffergroesse) {
            puffergroesse = puffergroesse + 10;
            puffer = realloc(puffer, puffergroesse);
            if(puffer == NULL){
                free(puffer);
                fprintf(stderr,"fehler, speicher konnte nicht reserviert werde");
                exit(EXIT_FAILURE);
            }
        }

    }
    } while (eingegebenes_zeichen != '\n');
    puffer[eingabepos] = '\0';
    puffer = realloc(puffer,eingabepos+1);
    if(puffer == NULL){
        free(puffer);
        fprintf(stderr,"fehler, speicher konnte nicht reserviert werde");
        exit(EXIT_FAILURE);
}
}
