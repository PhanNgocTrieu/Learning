#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

int main(void)
{
    FILE *file = fopen("phonebook.csv","a");
    if (file == NULL)
    {
        return 1;
    }

    char *name = malloc(100);
    gets(name);
    char *number = malloc(25);
    gets(number);

    fprintf(file,"%s,%s\n", name, number);

    fclose(file);
    
}