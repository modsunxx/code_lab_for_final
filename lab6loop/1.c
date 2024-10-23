#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main() {
    srand(time(0)); 

    bool coin = rand() % 2; 

    if (coin) {
        printf("หัว\n");
    } else {
        printf("ก้อย\n");
    }

    return 0;
}