/**
 * Factorial For N Using For Loop
 */
#include <stdio.h>
int main()
{
    int i, n, result = 1;
    printf(" Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1)
    {
        // printf("\n I : %d", i);
        // printf("\n Result B4 : %d", result);
        result *= i;
        // printf("\n Result After : %d", result);
    }
    printf("\n Factorial of %d : %d", n, result);
    printf("\n");
    return 0;
}