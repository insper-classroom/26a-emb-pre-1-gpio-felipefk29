#include <stdio.h>

#define NUM_ELEMENTS 10

static int multiplyNumbers(int x, int y) {
    return x * y;
}

int main(void) {
    int a = 0;
    int b = 5;

    int result = multiplyNumbers(a, b);
    printf("%d\n", result);   // usa a variável (evita warning)

    int arr[NUM_ELEMENTS];
    for (int i = 0; i < NUM_ELEMENTS; i++) {
        arr[i] = i;           // i vai de 0 até NUM_ELEMENTS-1 (sem estourar)
    }

    return 0;
}