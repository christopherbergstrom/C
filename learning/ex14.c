#include <stdio.h>
#include <ctype.h>
#include <string.h>

// forward declarations
int canPrintIt(char c);
void printLetters(long length, char arg[]);

void printArguments(int argc, char *argv[])
{
    int i = 0;
    for (i = 0; i < argc; i++)
    {
        // printf("argv[i]: %s, length: %lu\n", argv[i], strlen(argv[i]));
        printLetters(strlen(argv[i]), argv[i]);
    }
}
int canPrintIt(char ch)
{
    return isalpha((int)ch) || isblank((int)ch);
}
void printLetters(long length, char arg[])
{
    // printf("length: %lu", length);
    int i = 0;
    // for (i = 0; arg[i] != '\0'; i++)
    for (i = 0; i < length; i++)
    {
        char ch = arg[i];
        if (canPrintIt(ch))
        {
            printf("'%c' == %d ", ch, ch);
        }
    }
    printf("\n");
}
int main(int argc, char *argv[])
{
    printArguments(argc, argv);
    return 0;
}