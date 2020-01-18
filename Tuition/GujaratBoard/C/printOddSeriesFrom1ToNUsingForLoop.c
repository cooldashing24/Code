//Print Odd Series From 1 To N Using For Loop
#include<stdio.h>
int main()
{
    int i, n;
    printf(" Enter end number: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i+=2)
    {
        printf("\n %d", i);
    }
    printf("\n");
    return 0;
}