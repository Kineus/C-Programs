/*Hello World to your Lecturer*/

#include <stdio.h>

int main()
{
    char lecturerName[100];

    /*Ask user for lecturer's name*/
    printf("Enter name of your Lecturer: \n");

    /*Get and store the User input*/
    fgets(lecturerName, 100, stdin);

    /*print Hello world and lecturer name*/
    printf("Hello world! %s", lecturerName);

    return 0;
}