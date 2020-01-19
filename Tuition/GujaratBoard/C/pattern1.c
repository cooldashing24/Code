/**
 *    # # # # #
 *    # # # # #
 *    # # # # #
 *    # # # # #
 *    # # # # #
 */
#include <stdio.h>
int main()
{
    int i, j, n, result = 1;
    printf(" Enter number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i += 1)
    {
        // printf("\n #");
        // printf("\n I : %d", i);
        for (j = 1; j <= n; j += 1)
        {
            // printf("\t | J : %d", j);
            printf("\t #");
        }
        printf("\n");
    }
    printf("\n");
    return 0;
}