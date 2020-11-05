#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char line[2550];

int main(int argc,char* argv[])
{
    FILE *fp = NULL;
    fp = fopen("test.in", "r");
    fgets(line,2000,(FILE *)fp);
    printf(line);
    fclose(fp);
}