/*Program to count 1-N*/

#include <stdio.h>

int main()
{
    int N;
    printf("Enter the Last Number to count to: \n");
    scanf("%d", &N);

    int i;
    for (i = 1; i < N; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}