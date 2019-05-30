#include <stdio.h>

int main(int argc, char *argv[])
{
    // create two arrays we care about
    int ages[] = {23, 43, 12, 89, 2};
    char *names[] = {"Alan", "Frank", "Mary", "John", "Lisa"};
    printf("ages loc: %p names loc: %p\n", &ages, &names);

    // safely get the size of ages
    int count = sizeof(ages) / sizeof(int);
    int i = 0;

    // first way using indexing
    for (i = 0; i < count; i++)
    {
        printf("%s has %d years alive\n", names[i], ages[i]);
    }
    printf("---\n");

    // setup the pointers to the start of the arrays
    int * pCur_age = ages;
    char ** pCur_name = names;

    // second way using pointers
    for (i = 0; i < count; i++)
    {
        printf("%s is %d years old\n", *(pCur_name+i), *(pCur_age+i));
    }
    printf("---\n");

    // third way, pointers are just arrays
    for (i = 0; i < count; i++)
    {
        printf("%s is %d years old again\n", pCur_name[i], pCur_age[i]);
    }
    printf("---\n");

    // fourth way with pointers in a stupid complex way
    for (pCur_name = names, pCur_age = ages; (pCur_age - ages) < count; pCur_name++, pCur_age++)
    {
        printf("%s lived %d years so far\n", *pCur_name, *pCur_age);
    }
    return 0;
}