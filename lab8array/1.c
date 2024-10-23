#include<stdio.h>
int main(){
    int i = 3;
    int a[]={0,2,4,6,8,1,3,5,7,9};
    printf("%d\n",a[0]+a[6]);
    printf("%d\n",a[1] * --a[4]);
    printf("%d\n",a[9]++);
    printf("%d\n",a[10]+a[4]);
    printf("%d\n",a[1]++ + a[0]);
    printf("%d\n",a[5+3]);
    printf("%d\n",--a[2*i]+a[1]++);
    printf("%d\n",a[1]+a[4]+a[9]);
}