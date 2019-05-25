#include <stdio.h>
#include <string.h>

void printStuff(int numbers[], char name[]);

int main(int argc, char *argv[])
{
    int numbers[4] = {0};
    // char name[6] = {'a'};
    char *name = "Chris";

    // first print them out raw
    printStuff(numbers, name);

    // setup the numbers
    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    // setup the name
    // name[0] = 'C';
    // name[1] = 'h';
    // name[2] = 'r';
    // name[3] = 'i';
    // name[4] = 's';
    // name[5] = '\0';

    // then print them out initialized
    printStuff(numbers, name);

    // another way to use name
    char *another = "Chris";
    printf("another: %s\n", another);
    printf("%c %c %c %c %c %c\n", another[0], another[1], another[2], another[3], another[4], another[5]);
    // printf("test");
    // printf("length: %lu", sizeof(another));
    // printf("long: %lu\n", strlen(another));
    for (int i = strlen(another)-1; i >= 0; i--)
    {
        printf("letter: %c\n", another[i]);
    }
    // printf("%c %c %c %c %c %c\n", another[0], another[1], another[2], another[3], another[4], another[5]);

    return 0;
}
void printStuff(int numbers[], char name[])
{
    printf("%d %d %d %d\n", numbers[0], numbers[1], numbers[2], numbers[3]);
    printf("%c %c %c %c %c %c\n", name[0], name[1], name[2], name[3], name[4], name[5]);
    printf("name: %s\n", name);
}