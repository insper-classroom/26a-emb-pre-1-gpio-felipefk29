#include "stdio.h"

void main(void) {
    int a = 0;
    int b = 0;

    void foo(void) {
        a = a + 1; // acessa variavel global
    }

    while (1) {
        foo();

        if (a > 5) {
            b = 1;
        }
    }
}