/**
 *      1
 *      1 2
 *      1 2	3
 *      1 2	3 4
 *      1 2	3 4 5
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
            printf("\t %d", j);
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}