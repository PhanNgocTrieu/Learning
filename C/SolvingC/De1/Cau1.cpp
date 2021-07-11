#include <stdio.h>


long int Tohop(int n, int k)
{
    if (k == 0 || k == n)
        return 1;
    if (k == 1)
    {
        return n;
    }
    return Tohop(n-1,k-1) + Tohop(n-1,k);
}

int main()
{
    int n;
    printf("nhap n: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        for (int a = n; a > i; a--)
        {
            printf(" ");
        }
        for (int j = 0; j <= i; j++)
        {
            printf("%ld ",Tohop(i,j));
        }
        printf("\n");
    }
    
    return 0;
}