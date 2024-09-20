#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tal1 = atoi(argv[1]);
    int tal2 = atoi(argv[2]);
    int produkt = tal1 * tal2;
    printf("Produkten är %d\n", produkt);

    return 0;
}