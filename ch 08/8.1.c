/**
 * Implement a function that receives as parameters a string and a character [c],
 * and returns the number of occurrences of the character ([c]) inside the string.
 *
 * For example, if the values passed to the function are "Rio de Janeiro" and the
 * character 'i', the function must return the value 2.
 *
 * The function must obey the following prototype:
 *
 * int count_occurrences (char *s, char c)
 */

#include <stdio.h>

int count_occurrences(char *s, char c)
{
    int count = 0;

    while (*s)
    {
        if (*s == c)
            count++;

        s++;
    }

    return count;
}

int main()
{
    printf("%d\n", count_occurrences("Rio de Janeiro", 'i'));

    return 0;
}
