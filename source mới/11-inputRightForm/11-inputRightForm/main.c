#include <stdio.h>
#include <stdlib.h>
// ép người dùng nhập số nguyên đích thực nếu nhập sai thì ép nhập lại
int main()
{
    int number;
    char ch;

    do{
        printf("\nNhap number: ");
        scanf("%d", &number);
        scanf("%c", &ch);//Hứng phần dư
        fflush(stdin);//xoá phần còn lại
        if(ch != 10){
            printf("\nNgu");
        }
    }while(ch != 10);
    return 0;
}
