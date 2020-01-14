#include <stdio.h>
#include <stdlib.h>

void minmax(int a[], int n, int *max, int *min);

int main(){
    int max, min, i;
    int a[10];
    for(i=0; i<10; i++){
        scanf("%d", &a[i]);
    }
    minmax(a, 10, &max, &min);
    printf("\nmax is: %d\nmin is: %d\n", max, min);

    return 0;
}


void minmax(int a[], int n, int *max, int *min) {
    int i;
    *max = a[0];
    for (i=1; i<n; i++){
        if(*max<a[i]){
            *max = a[i];
        } 

    }
     
    *min = a[0];
    for (i=1; i<n; i++){
        if(*min>a[i]){
            *min = a[i];
        } 

    }

}

