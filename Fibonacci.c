#include <stdio.h>

int fibonacci(int num) {
    int a = 0, b = 1, temp;

    if (num == 0 || num == 1) return 1;

    while (b < num) {
        temp = a + b;
        a = b;
        b = temp;
    }

    return (b == num);
}

int main() {
    int num;
    printf("Informe um número: ");
    scanf("%d", &num);

    if (fibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}