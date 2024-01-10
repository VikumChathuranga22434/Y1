#include <stdio.h>
#include <assert.h>

int main ()
{
    int i, j, count1, count2;
    int identityArr[4][4];

    for (i = 0; i <= 3; i++)
    {
        count1 = i;
        printf ("Value for row %d\n", ++count1);

        for (j = 0; j <= 3; j++)
        {
            count2 = j;
            printf ("\tEnter element %d : ", ++count2);
            scanf ("%d", &identityArr[i][j]);
        }

        printf ("\n");
    }

    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            printf ("%d\t", identityArr[i][j]);
        }

        printf ("\n");
    }

    for (i = 0; i < 4; ++i)
    {
        for (j = 0; j < 4; ++j)
        {
            if (i == j)
            {
                assert(identityArr[i][j] == 1);
            }

            else
            {
                assert(identityArr[i][j] == 0);
            }
        }
    }

    return 0;
}
