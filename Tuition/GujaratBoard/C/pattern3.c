/**
 *      1
 *      2 2
 *      3 3	3
 *      4 4	4 4
 *      5 5	5 5 5
 */
#include <stdio.h>
int main()
{
    int i, j, n, result = 1;
    printf(" Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1)
    {
        for (j = 1; j <= i; j += 1)
        {
            printf("\t %d", i);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}