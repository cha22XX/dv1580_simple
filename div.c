#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tal1 = atoi(argv[1]);
    int tal2 = atoi(argv[2]);
    if (tal2 == 0) {
        printf("DIV ZERO NOT ALLOWED!\n");
        return 1; 
    }
    double kvot = (double)tal1 / tal2;
    printf("Kvoten är %.4f\n", kvot);

    return 0; 
}
