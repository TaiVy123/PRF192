#include <stdio.h>
#include <stdlib.h>

//comment: ghi chu

/*
cntt: xu ly thong tin bang cong nghe
luu tru -> tinh toan -> bao cao (report)

datatype: kieu du lieu
ky tu char  character     1byte  'a', '2', 'diep' -> 'p'
so nguyen int  integer    4bype   9, 1999, 17.9   -> 17
so thuc   float  float    4byte   9, 1999, 17.9   -> 17.9
so thuc double long float 8byte   9, 17.9, 123123123.1231
*/

//C la ngon ngu huong thu tuc
//   procedure: tuan tu        sequence:  dong chay

//dau nhac he args

int main()
{
    //luu tru
    //luu ky tu dau tien trong ten cua minh
    //  1. xac dinh kieu: char
    //  2. xac dinh ten: phai co nghia
    //     cammelCase:  cu phap con lac da
    //     khong ki tu dac biet (tru $ _)
    //     so khong nam o dau
    //     phai la danh tu
    //     = : phep gan : assignment
    // khoi tao bien de luu
    char firstCharOfName = 't';
    // luu tuoi cua minh
    int age = 18;
    // luu diem cua minh:  point
    float point = 8.75;
    double score = 8.75;

    // lay ra xem
    //print format: in theo dinh dang, in theo chuan

    printf("Phuoc Tri dep trai");
    //in ra ky tu dau tien trong ten cua minh
    printf("\nKy tu dau tien trong ten la %c", firstCharOfName);
    //in ra tuoi cua minh
    printf("\nTuoi cua minh la %i",age);//i: integer
    printf("\nTuoi cua minh la %d",age);//d: decimal
    //in ra diem cua minh
    printf("\nDiem ne %.2f",point);//f:float
    printf("\nDiem ne %.2lf",score);//lf:long float
    //in ra dia chi cuar bien age
    printf("\nDia chi cua age ne %u",&age);//unsigned int: so nguyen khong dau
    //ngoai le
    int number = 'A';
    char ch = 66;
    //tu duy lap trinh
    //tinh tong | thuong gia tri cua 2 bien so nguyen

    printf("\nNumber ne %c", number);//65-'A'
    printf("\nCh ne %c", ch);//66-'B'
    //null la biet kieu nhung khong biet gia tri
    //void la khong co gi ca

    int numb1 = 10;
    int numb2 = 3;
    int result1 = numb1 + numb2;
    float result2 =(float) numb1 / numb2;//ep kieu
    printf("\n%d + %d = %d",numb1,numb2,result1);
    printf("\n%d / %d = %f",numb1,numb2,result2);


    //Hoan vi: swap
    //Doi gia tri trong 2 bien so nguyen
    int number1 = 15;
    int sting = 10;

    //number1 = sting;
    //sting = number1;

    int tmp = sting;
    sting = number1;
    number1 = tmp;

    sting = sting + number1;
    number1 = sting - number1;
    sting = sting - number1;

    printf("\nNumber1 = %d, sting = %d",sting, number1);



    return 0;
}
//return 0: tra ra cho nguoi goi so 0
//window nhan duoc so 0 thi hieu la app da dung
