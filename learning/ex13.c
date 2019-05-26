#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;
    // go through each string in argv
    // why am I skipping argv[0]?
    for (i = 1; i < argc; i++)
    {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // Let's make our own array of strings
    char *states[] = {"California", "Colorado", "New York", NULL};
    int numStates = 4;
    states[0] = argv[1];
    for (i = 0; i < numStates; i++)
    {
        printf("state %d: %s\n", i, states[i]);
    }
    char test0 = {'h'};
    char test1[] = {"hello"};
    char *test2 = {"hello"};
    char test3[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("1: %c\n2: %s\n3: %s\n4: %s\n", test0, test1, test2, test3);
    return 0;
}