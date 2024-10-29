#include <stdio.h>
#include <stdlib.h>
//-arrayAssignment: gán mảng //  dán mảng
/*
    cpyArray: sao chép mảng
        copy mảng thì như nào
        a = 5
        b = 10
        a = 5   => pass by value: truyền tham trị
                => mượn giá trị để tham khảo: copy
        a sao chép b
            b người bị copy: giữ nguyên
            a người đi copy: bị thay đổi
    concatArray: nối mang1, mang2, mang3
        v2: nhét
        v1: hàm nhận vào mang
        sau khi xử lí: mang1 ko doi
                       mang2 ko doi
                       mang 3 se thanh mang1 + mang2
            b1: xoa mang1
            b2: nhet mang1 vao mang3
            b3: nhet mang2 vao mang3

    reverseArray: đảo ngược
        c1: nhét theo chiều ngược
        c2: swap đối xứng với thằng giữa
    dán đối xướng | nhét | swap đối xứng | duyệt ngược
*/
const int MAX = 100;
void inputArrS(int arrS[], int* sizeS);
void outputArrS(int arrS[], int sizeS);
void inputArrM(int arrM[], int* sizeM);
void outputArrM(int arrM[], int sizeM);
void cpyArr(int arrS[], int *sizeS,
            int arrM[], int sizeM);
void cpyArrV2(int arrS[], int *sizeS,
            int arrM[], int sizeM);
int main()
{
    int arrS[MAX];
    int arrM[MAX];
    int sizeS;
    int sizeM;
    inputArrS(arrS, &sizeS);
    printf("Cac mang cua S ne ");
    outputArrS(arrS, sizeS);
    inputArrM(arrM, &sizeM);
    printf("Cac mang cua M ne ");
    outputArrM(arrM, sizeM);
    cpyArrV2(arrS, &sizeS, arrM, sizeM);
    printf("\nCac mang sau khi doi ne");
    printf("\nCac mang cua S ne ");
    outputArrS(arrS, sizeS);
    printf("\nCac mang cua M ne ");
    outputArrM(arrM, sizeM);
    return 0;
}
void inputArrS(int arrS[], int* sizeS){
    printf("\nNhap kich thuoc ");
    scanf("%d", sizeS);
    for(int i =0; i<*sizeS; i++){
        printf("\narr[%d]: ", i);
        scanf("%d", &arrS[i]);
    }
}
void outputArrS(int arrS[], int sizeS){
    for(int i = 0; i<sizeS; i++){
        printf("%5d", arrS[i]);
    }
}
void inputArrM(int arrM[], int* sizeM){
    printf("\nNhap kich thuoc ");
    scanf("%d", sizeM);
    for(int i =0; i<*sizeM; i++){
        printf("\narr[%d]: ", i);
        scanf("%d", &arrM[i]);
    }
}
void outputArrM(int arrM[], int sizeM){
    for(int i = 0; i<sizeM; i++){
        printf("%5d", arrM[i]);
    }
}
//arrS sao chép arrM
void cpyArr(int arrS[], int *sizeS,
            int arrM[], int sizeM){
    //duyệt mảng muốn copy
    for(int i = 0; i<sizeM;i++){
        arrS[i]=arrM[i];
    }
    //sao chép kích thước
    *sizeS=sizeM;
}
void cpyArrV2(int arrS[], int *sizeS,
            int arrM[], int sizeM){
    //duyệt mảng muốn copy
    *sizeS=0;
    for(int i = 0; i<sizeM;i++){
        arrS[*sizeS]=arrM[i]; //nhét
        (*sizeS)++;             //
    }
    //sao chép kích thước

}
void concatArrV2(int arrS[], int *sizeS, //
            int arrM[], int sizeM){
    for(int i = 0; i<sizeM;i++){
        arrS[*sizeS]=arrM[i]; //nhét
        (*sizeS)++;             //
    }
}
