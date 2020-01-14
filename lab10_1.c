#include <stdio.h>
#include <stdlib.h>

int main(){
    double dnumb = 3.14233435;
    int inumb = 4;
    char cstr = {'a', 'b', 'c'};
    double *a = &dnumb;
    int *b = &inumb;
    char *c = &cstr;

    printf("%lf\n", dnumb);
    printf("%d\n", inumb);
    printf("%c\n", cstr);
    printf("-------------\n");
    printf("%p\n", a);
    printf("%p\n", b);
    printf("%p\n", c);

    return 0;
}