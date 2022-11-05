/*Program to count 1-N*/

#include <stdio.h>
void reverseSentence();

int main()
{
    printf("Enter Sentence: ");
    reverseSentence();

    return 0;
}
void reverseSentence()
{
    char c;
    scanf("%c", &c);

    if (c != '\n')
    {
        reverseSentence();
        printf("%c", c);
    }
}