#include <stdio.h>
#include <stdint.h>
#include <ctype.h>
#include <string.h>

typedef uint8_t BYTE;

int main(int argc, char *argv[])
{
    //check usage
    if (argc != 2)
    {
        return 1;
    }

    // Open file
    FILE *file = fopen(argv[1],"r");
    if (file == NULL)
    {
        return 1;
    }

    // Read first three bytes
    BYTE bytes[3];
    fread(bytes,sizeof(BYTE),3,file);

    // Checking first three bytes
    if (bytes[0] == 0xff && bytes[1] == 0xd8 && bytes[2] == 0xff)
    {
        printf("maybe\n");
    }
    else
    {
        printf("No\n");
    }
}