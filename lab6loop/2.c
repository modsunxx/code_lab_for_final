#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);//รับค่าตัวแปร

    for (int i = 1; i <= 12 ; i++){
        printf("%d ",input*i);//นำค่าตัวแปรที่รับคูณด้วยi
    }
}