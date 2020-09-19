#include <stdio.h>

void swap(int *x, int *y){
    int tmp;
    tmp = *x;
    *x = *y;
    *y = tmp;
}

void insertion_sort(int array[], int array_size){
    int i, j;
    for (i = 1;i < array_size;i++){
        j=i;
        while(array[j-1] > array[j]){
            swap(&array[j-1], &array[j]);
            j--;
        }
    }
}

int main(void){
    int i;
    int array[10] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};

    printf("Before\n");
    for (i = 0;i < 10;i++){
        printf("%d", array[i]);
    }
    printf("\n");


    insertion_sort(array, 10);

    printf("After\n");
    for (i = 0;i < 10;i++){
        printf("%d", array[i]);
    }
    printf("\n");

    return 0;
}
