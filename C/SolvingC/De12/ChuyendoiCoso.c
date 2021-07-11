#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int convertNumber(long long int n, int c)
{
    if (c < 2 || c > 16 || n < 0)
    {
        printf("Co so sai hoac n < 0!\n");
        return 0;
    }
    char *char_arr = malloc(100);
    int i  = 0;
    while (n > 0)
    {
        if (c >= 10)
        {
            int remainder = n % c;
            if (remainder >= 10)
            {
                char_arr[i] = (char) (remainder + 55);
                i++;
            }
            else
            {
                char_arr[i] = (char) (remainder + 48);
                i++;
            }
        }
        else
        {
            int remainder = n % c;
            char_arr[i] = (char) (remainder + 48);
            i++;
        }
        n = n / c;
    }
    
    printf("After converting: \n");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%c ",char_arr[j]);
    }
}
int main(void)
{
    long long int n;
    int c;
    printf("Enter n: ");
    scanf("%lld",&n);
    printf("Enter c: ");
    scanf("%d",&c);
    convertNumber(n,c);
}