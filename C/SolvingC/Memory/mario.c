#include <stdio.h>
#include <stdlib.h>


void draw(int h);

int main()
{
    int height;
    printf("Height: ");
    scanf("%d",&height);

    draw(height);
    return 0;
}

// void draw(int h)
// {
//     for (int i = 1; i <= h; i++)
//     {
//         for (int j = 1; j <= i; j++)       {
//             printf("#");
//         }
//         printf("\n");
//     } 
// }

void draw(int h)
{
    
    if (h == 0)
    {
        return;
    }
    // fault: call functions to infinity!
    // so we need condition to return as above
    draw(h - 1);
    for (int i = 0; i < h; i++)
    {
        printf("#");
    }
    printf("\n");
}