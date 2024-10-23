#include<stdio.h>
int main(){
    int even_count = 0;
    int odd_count = 0;
    int x[] = { 7, 9, -1, 4, 12, 9, 3, 2, -7, 2, 1, 9, -15, 24, 11, 13 };
    for (int i = 0; i < 17; i++){
        printf("%d ",x[i]);
        if(x[i]%2==0){
            even_count++;
        }
        else{
            odd_count++;
        }
    }
    printf("\n");
    printf("Total even num is : %d \n",even_count);
    printf("Total odd num is : %d \n",odd_count);
    
}