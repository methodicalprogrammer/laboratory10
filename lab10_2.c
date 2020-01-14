#include <stdio.h>
#include <stdlib.h>

int main(){
    int x = 2;
    int y = 8;
    int *p = &x;
    int *q = &y;

    printf("1) %p - %d\n",p ,*p);
    printf("2) %d - %d\n",p ,*p);
    printf("3) %p - %d\n",q ,*q);
    printf("4) %d - %d\n",q ,*q);
    int **pp = &p;
    printf("5) %p\n",&p);
    int **qq = &q;
    printf("6) %p\n",&q);
    return 0;
}