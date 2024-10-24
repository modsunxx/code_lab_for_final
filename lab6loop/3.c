#include<stdio.h>
int main(){
    int input;
    scanf("%d",&input);//รับค่าตัวแปรinputเข้ามา

    for (int i = 1; i <= input; i++){//วนloopจาก1-->inputโดยเพิ่มชึ้นทีละ1
        if(i%3==0){//ถ้าหากi/3แล้วไม่มีเศษเงื่อนไชนี้จะเป็นจริง
            printf("* ");//ให้print*เเทนตัวเลข
            continue;//bypassตัวเลข
        }
        printf("%d ",i);//printตัวเลข
    }
    
}