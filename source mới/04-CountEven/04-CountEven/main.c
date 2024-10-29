#include <stdio.h>
#include <stdlib.h>
//05-CountEven
/*
Nhập vào 2 số nguyên lần lượt là start và end in ra các số trong đoạn từ start đến end
- mô tả phần mềm:
    nhap start: -2
    nhap end: 6

    -2 -1 0 1 2 3 4 5 6
    */
int main()
{
    int start;
    int end;
        printf("\nstart = ");
        scanf("\n%d", &start);

         printf("\nend = ");
        scanf("\n%d", &end);

        if (start > end){
            int tmp = start;
                start = end;
                end = tmp;
                }
       /* for(int i = start; i<= end; i++){
        printf("%d", i);
        }
*/
        //Tính tổng các số trong đoạn
        int sum = 0;
		int i;
        for(i = start; i<= end; i++){

            sum += i;
        }
        printf("\nSum = %d\n", sum);
        for(i = start; i<= end; i++){

            if(i % 2 == 0){
                printf("%2d ", i);
            }
        }
    return 0;
}
/*
tạo project 08-workCountEvent
in ra các số chẳn trong đoạn
tính tổng các số lẻ trong đoạn
đếm xem có bao nhiêu số trong đoạn đếm xem có bao nhiêu số chẳn trong đoạn
*/
