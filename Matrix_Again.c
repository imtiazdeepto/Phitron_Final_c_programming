#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);
    int matrix[a][b];
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
            scanf("%d", &matrix[i][j]);
        
    }

    for (int j = 0; j < b; j++)
        printf("%d ", matrix[a - 1][j]);

    printf("\n");
    for (int i = 0; i < a; i++)
        printf("%d ", matrix[i][b - 1]);

    return 0;
}