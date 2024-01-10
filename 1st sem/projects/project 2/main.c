#include <stdio.h>


int main()
{
    char firstname[30];
     printf ("enter your first name :");
     scanf  ("%s", firstname);
     printf ("your first name is %s\n", firstname);

    char secondname[30];
     printf ("enter your 2nd name :");
     scanf  ("%s", secondname);
     printf ("your second name is %s\n", secondname);
     printf ("your full name : %s %s", firstname, secondname);

     return 0;
}
