#include <stdio.h>
#include <stdlib.h>
//Nhập vào height và width
// in ra màn hình
// vd: height = 5 và width = 7

int main()
{
    int height;
    int width, i, j;

    printf("\nNhap height: ");
    scanf("%d", &height);
    printf("\nNhap width: ");
    scanf("%d", &width);

    for(i = 0; i < height; i++){
        for(j = 0; j < width; j++){
            if (i == 0 || i == height-1 || j == 0 || j == width-1){
            printf("*");
        }else{
            printf(" ");
        }
        }
        printf("\n");
    }

    return 0;
}
