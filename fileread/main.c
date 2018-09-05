#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fptr;

    int i;
    char id;
    char singleLine[255];
    char string_search[255];
    fptr = fopen("C:\\users\\mahbu\\Desktop\\all.txt", "r");

/*
    while(!feof(fptr))
    {
        fgets(singleLine, 250, fptr);
        puts(singleLine);

    }

*/
    for(i = 0; i<= 100; i++)
    {
    fscanf(fptr, "%s", singleLine);

    id = atoi(singleLine);

    if(id == 'amader')
    {
        fgets(singleLine, 255, (FILE*)fptr);
        printf("%s",singleLine);
        break;
    }
/*

    int string = atoi(singleLine);
    if(string == 'riad')
    {
         fgets(singleLine, 255, (FILE*)fptr);
        printf("%s",singleLine);
        break;
    }
*/
}

    fclose(fptr);
    return 0;
}
