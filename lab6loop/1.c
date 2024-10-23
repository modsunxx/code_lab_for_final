#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main()
{
    for (int i = 0; i < 3; i++)
    {

        bool coin = rand() % 2;

        if (coin)
        {
            printf("หัว\n");
        }
        else
        {
            printf("ก้อย\n");
        }
    }
}