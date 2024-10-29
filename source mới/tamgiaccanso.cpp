#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
    int x, h, i, k, var;
    scanf("%d", &x);
    
    for(h = 1; h <= x; h++) {
        var = 1; // Start from 1 for each row
        for(k = x - h; k >= 1; k--) 
            printf("  ");
        
        for(i = 1; i <= h + h - 1; i++) {
            printf("%2d", var);
            var++;
        }
        printf("\n");
    }
    
    return 0;
}
