#include <stdio.h>


int pertenceFibonacci(int n) {
    int a = 0, b = 1, temp;

    if (n == 0 || n == 1) {
        return 1;
    }

    while (b < n) {
        temp = a + b;
        a = b;
        b = temp;
    }


    return (b == n);
}

int main() {
    int num;

    printf("Informe um número: ");
    scanf("%d", &num);

    if (pertenceFibonacci(num)) {
        printf("O número %d pertence à sequência de Fibonacci.\n", num);
    } else {
        printf("O número %d não pertence à sequência de Fibonacci.\n", num);
    }

    return 0;
}
