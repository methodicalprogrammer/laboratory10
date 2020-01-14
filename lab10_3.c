#include <stdio.h>
#include <stdlib.h>
int swapint(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
}

double swapdouble(int x, int y) {
    double temp = x;
    x = y;
    y = temp;
}

int main() {
    int x, y;
    printf("Type 2 numbers: \n");
    scanf("%d %d", &x, &y);
    swapdouble(x, y);
    printf("%d\n%d", y, x);
    return 0;
}