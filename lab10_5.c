#include <stdio.h>
#include <stdlib.h>

char contains( char *array, char c);

int main(){
    int i;
    char x[30], c;

    printf("Type a string with the lenght of 30 characters:\n");
    scanf("%c",&x);
    c = 'a';
    
    contains(x, c);
    return 0;
}

char contains( char *array, char c){
    int exist = 0;
    int i;
    for(i=1; i<30; i++){
        if(*(array+i) == c){
            exist = 1;
        }
    }
    if(exist==1){
        printf("The string contains the char %c", c);
    }else {
        printf("The string doesn't contain the char %c", c);

    }
}