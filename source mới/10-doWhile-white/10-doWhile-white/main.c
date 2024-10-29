#include <stdio.h>
#include <stdlib.h>
//Loop: vòng lặp
//For | do while | while
int main()
{
 /*   int i = 1;
    do{
        printf("\ni love you %d", i);
        i++;
    }while(i <= 10);
*/
 /*   int a;
    for(;;){
        printf("\nNhap a di: ");
        scanf("%d", &a);
        if(a == 15){
            break;
        }
    }
*/
 /*   int a;
    do{
        printf("\nNhap a di: ");
        scanf("%d", &a);
    }while(a != 15);
*/
    int i = 1;
    while(i <= 10){
        printf("\ni love you %d", i);
               i++;
    }

    return 0;
}
