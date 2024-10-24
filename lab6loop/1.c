#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{

    for (int i = 1; i < 3; i++) //ทำloopวนสามรอบ
    {

        bool coin = rand() % 2; //ประกาศตัวแปรcoin=ให้สุ่มวา่าเป๊น0,1

        if (coin)//coinเป็น0
        {
            printf("หัว\n");
        }
        else//coinเป็น1
        {
            printf("ก้อย\n");
        }
    }
}