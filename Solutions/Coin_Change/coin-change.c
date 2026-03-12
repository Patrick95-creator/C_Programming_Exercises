#include <stdio.h>

const char* zahlenAlsText(int zahl) {
    switch (zahl) {
        case 1: return "Eine";
        case 2: return "Zwei";
        case 3: return "Drei";
        case 4: return "Vier";
        case 5: return "Fünf";
        default: return NULL;
    }
}

int berechne_muenze(int betrag, int muenzwert, int *anzahl_muenze, int *cbetrag){
    *anzahl_muenze = betrag / muenzwert;
    *cbetrag = betrag % muenzwert;
    return 0;
}

int main() {

    float betrag = 0;

    printf("Wie gross ist der Euro-Betrag, welcher in moeglichst wenig Muenzen aufgeteilt werden soll?\n");

    scanf("%f", &betrag);

    int muenze[] = {200, 100, 50, 20, 10, 5, 2, 1};

    int cbetrag = (int)(betrag * 100 + 0.5);

    for (int i = 0; i < 8; i++) {

        int anzahl_muenze = 0;

        berechne_muenze(cbetrag, muenze[i], &anzahl_muenze, &cbetrag);

        if (anzahl_muenze == 0) {
            continue;
        }

        const char* text = zahlenAlsText(anzahl_muenze);

        if (text) {
            printf("%s ", text);
        } else {
            printf("%d ", anzahl_muenze);
        }

        if (muenze[i] >= 100) {
            printf("%.0f-Euro-", muenze[i] / 100.0);
        } else {
            printf("%d-Cent-", muenze[i]);
        }

        if (anzahl_muenze == 1) {
            printf("Muenze\n");
        } else {
            printf("Muenzen\n");
        }
    }

    return 0;
}
