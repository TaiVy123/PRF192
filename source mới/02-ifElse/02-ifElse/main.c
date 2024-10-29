#include <stdio.h>
#include <stdlib.h>
//02-ifElse
//cấu trúc phân nhánh
int main()
{
     /*
     if(conditional){
        command block;
     }else if (conditional)
        command block;
     }
     */
     int car = 7;
     printf("\n Sai gon");
     printf("\nCao toc Lien Khuong");
     // Gặp 1 biển báo

     if(car >= 7){
        printf("\nPren");
    }else if(car == 7){
        printf("\nSacom");
    }else{
        printf("\nMimosa");
    }

    printf("\nDa Lat");

// ví dụ

    int a = 5;
    if(a == 5){
        a += 2;
    }
    if(a == 7){
        a = 2;
    }else if(a == 4){
        a = 2;
    }else{
        a -= 3;
    }
    printf("\nA = %d",a);

    //nói riêng về điều kiện
    //comparision operator: toán thử so sánh
    // == so sánh bằng
    // != so sánh khác
    // > < >= <=
    //Mathetic operator: toán tử toán hạng
    // + - * / %
    // toán tử tăng
    //int a = 5;
    a = a + 2;  //7
    a += 2;     //9
    a = a + 1;  //10
    a += 1;     //11
    a++;        //12
    a = a + 3;  //15
    a += 3;     //18
    a --;       //17

    //II - logical operator: toán tử logic
    //muốn đi bar thì cần gì
    //tuổi từ 18 tuổi trở lên
    //money trên 300
    int age = 25;
    int money = 11;
   if(age >= 18){
       if(money > 300){
            printf("\nWelcome");
       }else{
            printf("\nCut");
       }
    }else{
        printf("\nCut");
    }

  /*  if(age >= 18 && money > 300){
        printf("\nWelcome");
    }else{
        printf("\nCut");
    }
  */
    //&&: AND: tìm false, tìm được thì chốt false lhoong được thì true
    //||: OR : tìm true, tìm được thì chốt true không được thì mới false

   a = 9;
    int b = 0;
    if(a == 10 && b++ > 2){
        printf("\nTrue a = %d, b = %d", a, b);
    }else{
        printf("\nFalse a = %d, b = %d", a, b);
    }

    return 0;
  }
