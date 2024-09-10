#include <stdio.h>
#include <string.h>

int main() {
    char string[100];
    int i, count = 0;

    printf("Digite uma palavra: ");
    fgets(string, sizeof(string), stdin);

    for (i = 0; i < strlen(string); i++) {

        if (tolower(string[i]) == 'a') {
            count++;
        }
    }

    if (count > 0) {
        printf("A letra 'a' (maiúscula ou minúscula) ocorre %d vezes.\n", count);
    } else {
        printf("A letra 'a' (maiúscula ou minúscula) não foi encontrada.\n");
    }

    return 0;
}
