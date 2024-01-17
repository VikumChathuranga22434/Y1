#include <stdio.h>

int main ()
{
	int i;
	int numArr[8];

	for (i = 0; i < 8; ++i)
	{
		printf ("Enter Value : ");
		scanf  ("%d", &numArr[i]);
	}

	for (i = 0; i < 8; ++i)
	{
		printf ("%d\t", numArr[i]);
	}

	printf ("\n\n");

	int n, modnumArr[8];

	printf ("Enter how many positions would you want to shift : ");
	scanf ("%d", &n);

	if (n < 8 && n > 0)
    {
        for (i = 0; i < 8; ++i)
        {
            modnumArr[(i+n)%8] = numArr[i];
        }

        for (i = 0; i < 8; ++i)
        {
            numArr[i] = modnumArr[i];
        }

    }

    else
    {
        printf ("Invalid shifting.\n");
    }

    printf ("Modified elements of the array : ");

    for (i = 0; i < 8; ++i)
    {
        printf ("%d\t", numArr[i]);
    }

    printf ("\n");

	return 0;
}
