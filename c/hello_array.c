#include <stdio.h>

int main() {
    char* lista[12] = {"H", "e", "l", "l", "o", " ", "w", "o", "r", "l", "d", "!"};
    int i;
    for (i = 0; i < 12; i++) {
        printf("%s", lista[i]);
    }
    printf("\n");
    return 0;
}
