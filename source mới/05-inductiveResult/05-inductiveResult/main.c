#include <stdio.h>
#include <stdlib.h>

int main()
{
  /*  nhập vào số nguyên n
    tính kết quả của 1^n + 2^n + 3^n + ... + n^n

    vd: nhập n = 5
    thì tính 1^5 + 2^5 + 3^5 + 4^5 + 5^5

    vd nhập n = 3
    thì tính 1^3 + 2^3 + 3^3
    return 0;
    */

    int n;
    printf("\nNhap n: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++){
        sum += pow(i, n);
    }
    printf("Result: %d", sum);
    return 0;
}
