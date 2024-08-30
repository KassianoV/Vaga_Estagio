#include <stdio.h>
#include <string.h>

void inverter_string(char *str) {
    int n = strlen(str);
    for (int i = 0; i < n / 2; i++) {
        char temp = str[i];
        str[i] = str[n - i - 1];
        str[n - i - 1] = temp;
    }
}

int main() {
    char str[100];
    printf("Informe a string a ser invertida: ");
    scanf("%s", str);

    inverter_string(str);
    printf("String invertida: %s\n", str);

    return 0;
}
