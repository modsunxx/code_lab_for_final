#include<stdio.h>
int main(){
    for (int i = 0; i < 6; i++){
        for (int j = 0; j < i; j++){
            printf(" ");
        }
        for (int k = 0; k < 5; k++){
            printf("* ");
        }
        
        printf("\n");
    }
    
}
