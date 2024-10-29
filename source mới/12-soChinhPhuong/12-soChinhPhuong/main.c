#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("\nNhap n: ");
    scanf("%d",&n);

 /*   for(int i = 0; pow(i,2)<= n; i++){
        if(pow(i,2) == n){
            printf("\n%d la so chinh phuong", n);
            return 0;
        }
    }
    printf("\n%d khong la so chinh phuong", n);
    return 0;
}*/
    if(sqrt(n)== (int)(sqrt(n))){
        printf("\n%d la so chinh phuong", n);
        return 0;
 }
    printf("\nMay bi ngu ah. %d khong phai la so chinh phuong", n);
    return 0;
    }
