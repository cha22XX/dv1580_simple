#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    int tal1 = atoi(argv[1]);
    int tal2 = atoi(argv[2]);
    int skillnad = tal1 - tal2;
    printf("Skillnaden är %d\n", skillnad);

    return 0; 
}
