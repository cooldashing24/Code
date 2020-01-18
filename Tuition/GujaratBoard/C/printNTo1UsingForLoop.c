/*
 * Print N To 1 i.e Reverse Series
 * Using For Loop
*/
#include <stdio.h>
int main()
{
    int i, start, end = 1;
    printf(" Enter start number: ");
    scanf("%d", &start);

    for (i = start; i >= end; i -= 1)
    {
        printf("\n %d", i);
    }

    printf("\n");
    return 0;
}