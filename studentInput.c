/*Program to Accept names of 10 students*/

#include <stdio.h>

int main()
{
    char NamesOfStudents[9] = {};
    int student;
    for (student = 0; student <= 9; student++)
    {
        /* receive names of students */
        printf("Enter name of student: ", student);

        fgets(NamesOfStudents, 10, stdin);
        printf(NamesOfStudents);
    }

    return 0;
}