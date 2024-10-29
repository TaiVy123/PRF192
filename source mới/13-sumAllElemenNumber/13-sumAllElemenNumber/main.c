#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int sum = 0;
  printf("\nNhap n: ");
    scanf("%d", &n);

  /*  while(n != 0){
        int da = n % 10;
        n = n / 10;
        sum += da;
    }
    printf("sum = %d", sum);
    */
    int i;
    for(i = n % 10; n != 0;){
        n = n / 10;
        sum += i;
        i = n % 10;
    }
    printf("\nsum = %d", sum);

    return 0;
}
