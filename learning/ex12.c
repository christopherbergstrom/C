#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = {"Chris"};
    char fullName[] = {'C', 'h', 'r', 'i', 's', ' ', 'R', '.', ' ', 'B', 'e', 'r', 'g', 's', 't', 'r', 'o', 'm', '\0'};

    // WARNING: On some systems you may have to change the %ld in this code to a %u since it will use unsigned ints
    printf("The size of an int: %ld\n", sizeof(int));
    printf("The size of areas (int[]): %ld\n", sizeof(areas));
    printf("The number of ints in areas: %ld\n", sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd is %d\n", areas[0], areas[1]);
    areas[0] = 5;
    areas[1] = name[0];
    // areas[1] = 'A';

    printf("The first area is %d, the 2nd is %d\n\n", areas[0], areas[1]);
    
    printf("The size of a char: %ld\n", sizeof(char));
    printf("The size of name (char[]): %ld\n", sizeof(name));
    printf("The number of chars: %ld\n\n", sizeof(name) / sizeof(char));

    printf("The size of full name (char[]): %ld\n", sizeof(fullName));
    printf("The number of chars %ld\n", sizeof(fullName) / sizeof(char));
    printf("name = \"%s\" and full name = \"%s\"\n", name, fullName);
    name[0] = 'H';
    fullName[0] = 'W';
    printf("name = \"%s\" and full name = \"%s\"\n", name, fullName);

    // for(int i = 0; i <= strlen(name); i++)
    // {
    //     printf("%c\n", name[i]);
    // }

    return 0;
}