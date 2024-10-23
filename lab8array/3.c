#include <stdio.h>
int main() {
    //3.1
    int num[100]; 
    int x,y;
    for (int i = 0; i < 100; i++) {
        num[i] = i + 1;
    }
    x = num[49]; 

    //3.2
    y = num[50];
    
    //3.3
    float array[100]; 
    float c;
    c = array[99];

    //3.4
    int bank[100]; 
    int var1 = 42; 
    bank[11] = var1; 

    //3.5
    int var2 = 24; 
    bank[0] = var2; 
}