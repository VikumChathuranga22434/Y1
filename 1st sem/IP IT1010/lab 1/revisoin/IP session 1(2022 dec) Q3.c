#include <stdio.h>

int total = 0;

int main ()
{
    int i, j, total = 0;
    FILE * cfPtr;

    char sudents[15];
    int a[4];

    cfPtr = fopen("answers.dat", "w");

    if (cfPtr == NULL)
    {
        printf ("Can't create a file.\n");
        return -1;
    }

    for (i=1; i<=5; ++i)
    {
        printf("Enter student number : ");
        scanf ("%s", sudents);
        fprintf(cfPtr, "%s : ", sudents);

        for (j=0; j<4; ++j)
        {
            printf ("Enter Answers for Questions %d : ", j+1);
            scanf ("%d", &a[j]);
            fprintf(cfPtr, "%d ", a[j]);
        }

        fprintf (cfPtr, "\n");
        printf ("\n");
    }

    fclose (cfPtr);

    cfPtr = fopen("answers.dat", "r");

    fscanf (cfPtr, " %s", sudents);
    while (!feof(cfPtr))
    {
        for (i=1; i<=4; ++i)
        {
            fscanf (cfPtr, " %s", sudents);
            printf (" %s : ", sudents);

            for (j=0; j<4; ++j)
            {
                fscanf (cfPtr, "%d", &a[j]);

                if (a[0] == 1)
                {
                    total += 1;
                }

                else if (a[1] == 4)
                {
                    total += 1;
                }

                else if (a[2] == 2)
                {
                    total += 1;
                }

                else if (a[3] == 3)
                {
                    total += 1;
                }

                else
                {
                    total += 0;
                }

            }

            printf ("%d\n", total);
            total += 0;
        }
    }

    fclose (cfPtr);

    return 0;
}
