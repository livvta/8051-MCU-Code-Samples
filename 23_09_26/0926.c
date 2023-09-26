#include <reg51.h>

void delay(unsigned int ms) {
    unsigned int i, j;
    for (i = 0; i < ms; i++)
        for (j = 0; j < 112; j++);
}

void main() {
    while (1) {
        for (int i = 0; i < 5; i++) {
            P1 = evenNumbers[i];
            delay(1000);
        }

        P1 = 0xFF;

        for (int i = 0; i < 5; i++) {
            P1 = oddNumbers[i];
            delay(1000);
        }

        P1 = 0xFF;
    }
}
