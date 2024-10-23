#include<stdio.h>
int main(){
    int m[1000];
    for (int i = 0; i < 1000; i++){
        m[i] = i + 1;
    }
    for (int j = 0; j < 1000; j++){
        printf("%d\n",m[j]);
    }
    
}