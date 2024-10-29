#include <stdio.h>
#include <stdlib.h>
const int MAX = 100;

void inputArray(int array[], int* size);
void outputArray(int array[], int size);
void reverseArrayV1(int array[], int size);
void reverseArrayV2(int array[], int size);


int main() {
    int arrMain[MAX];
    int sizeMain = 0;

    inputArray(arrMain, &sizeMain);
    printf("\nMang vua nhap ne: ");
    outputArray(arrMain, sizeMain);

    printf("\nSau khi dao nguoc: ");
    reverseArrayV1(arrMain, sizeMain);
    outputArray(arrMain, sizeMain);
    reverseArrayV2(arrMain, sizeMain);
    outputArray(arrMain, sizeMain);

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

void reverseArrayV1(int array[], int size) {
    int start = 0;
    int end = size - 1;

    while (start < end) {
        int tmp = array[start];
        array[start] = array[end];
        array[end] = tmp;
        start++;
        end--;
    }
}
void reverseArrayV2(int array[], int size) {
    int arrTmp[100];
    int sizeTmp = 0;
    for(int i = size - 1; i >= 0; i--){
       arrTmp[sizeTmp]= array[i];
       sizeTmp++;
    }
    for(int i = 0; i <= sizeTmp - 1; i++){
        array[i]= arrTmp[i];
    }
}
