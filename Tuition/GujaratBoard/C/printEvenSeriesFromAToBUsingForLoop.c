//Print Even Series From A To B Using For Loop
#include <stdio.h>
int main()
{
    int i, start, end, rem;
    printf(" Enter start & end number: ");
    scanf("%d %d", &start, &end);

    rem = start % 2;

    i = start;
    if (rem == 1)
    {
        i += 1;
    }

    //i = (rem == 0) ? start : (start + 1);

    for (; i <= end; i += 2)
    {
        printf("\n %d", i);
    }
    printf("\n");
    return 0;
}