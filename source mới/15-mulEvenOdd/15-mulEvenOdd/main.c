#include <stdio.h>
#include <stdlib.h>
// nhập vào một số nguyên dương <= 2
//tính tích của các số chẳn
//tính tích của các số lẻ
//trong đoạn từ 1 đến n-1

//vd nhập n = 5
// tính chẳn: 8 => 2*4
// tích lẻ:   3 => 1*3
int main()
{
    int n;
    int mulEven = 1;
    int mulOdd = 1;
    int hasEven = 0, hasOdd = 0;
    char buffer;
    do{
        printf("\nNhap cho toi di: ");
        scanf("%d", &n);
        scanf("%c", &buffer);
        fflush(stdin);
        if(buffer != 10 || n < 2){
            printf("\nMay bi ngu ah!!!");
            }
    }while(buffer != 10 || n < 2);
	int i;
    for(i = 1; i <= n - 1; i++){
        if(i % 2 == 0){
            mulEven *= i;
            hasEven = 1;
        }else{
            mulOdd *= i;
            hasOdd = 1;
        }
    }
    mulEven *= hasEven;
    mulOdd *= hasOdd;
    printf("\nMulEven = %d", mulEven);
    printf("\nMulOdd = %d", mulOdd);
    return 0;
}
