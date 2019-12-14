//gcc -static -o catflag catflag.c
#include <stdio.h>
#include <string.h>
#include <unistd.h>

void printflag(){
    FILE *fp = NULL;
    char buff[255];
    fp = fopen("/flag.txt", "r");
    fgets(buff, 255, (FILE*)fp);
    printf("%s\n", buff);
    fclose(fp); 
}

int main(int argc,char **argv)
{
        printflag();
    return 0;
}