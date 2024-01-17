#include <stdio.h>

int main()
{
	FILE * ptn;
	
	char name[15];
	int i, num;
	
	ptn = fopen ("Directory.dat", "w");
	
	if (ptn == NULL)
	{
		printf ("Cannot create a file.\n");
		return -1;
	}
	
	for (i=0; i<5; ++i)
	{
		printf ("Enter The name         : ");
		scanf ("%s", name);
		
		printf ("Enter Telephone number : ");
		scanf ("%d", &num);
		
		fprintf (ptn, "%s\t %d\n", name, num);
	}	
	
	fclose (ptn);
	
	printf ("\n");
	
	ptn = fopen ("Directory.dat", "r");
	
	if (ptn == NULL)
	{
		printf ("Cannot open the file.\n");
		return 0;
	}

	char nameN[15];
	
	printf ("Enter con. name : ");
	scanf ("%s", nameN);
	
	while (!feof(ptn))
	{
		fscanf (ptn, "%s %d", name, &num);
				
		if (!strcmp(nameN, name))
		{
			printf ("%d", num);	
				
		}
		
	}
	
	fclose (ptn);
	
	return 0;
}
