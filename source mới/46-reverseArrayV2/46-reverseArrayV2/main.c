#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void reverseArray(int array[], int size);

int main() {
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);

    printf("\nSau khi dao nguoc: ");
    reverseArray(arrMain, sizeMain);

    return 0;
}

void inputArray(int array[], int* size) {
    printf("\nNhap kich thuoc: ");
    scanf("%d", size);
    for (int i = 0; i < *size; i++) {
        printf("\nNhap array[%d]: ", i);
        scanf("%d", &array[i]);
    }
}

void outputArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%5d", array[i]);
    }
}

void reverseArray(int array[], int size) {
    for(int i = size - 1; i >= 0; i--){
        printf("%5d", array[i]);
    }
}

