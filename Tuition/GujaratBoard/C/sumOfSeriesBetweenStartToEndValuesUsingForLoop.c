/**
 * Sum Of Series Between Start To End 
 * Values Using For Loop
 */
#include <stdio.h>
int main()
{
    int i, start, end, result = 0;
    printf(" Enter start & end number: ");
    scanf("%d %d", &start, &end);
    printf("\n Start value : %d", start);
    printf("\n End value : %d", end);

    for (i = start; i <= end; i += 1)
    {
        //printf("\n I : %d", i);
        //printf("\n Result B4 adding : %d", result);
        result = result + i;
        //printf("\n Result : %d", result);
    }
    printf("\n Sum of series : %d", result);
    printf("\n");
    return 0;
}