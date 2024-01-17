#include <stdio.h>
#include <string.h>

int getlength(char arr[]);
void reverseArr(char array1[], char array2[]);

int getlength(char arr[])
{	
    return strlen(arr);
}

void reverseArr(char array1[], char array2[])
{
    int i, j;
    int n;
    
    n = getlength(array1);
    
    for (i=0;i<n;++i)
    {
        array1[(i+n)%n] = array2[i];
    }
    
    for (i=0;i<n;++i)
    {
        array2[i] = array1[i];
    }

    printf ("%s", array2);
    
}

int main()
{
    char NameArr[15];
    char reverseName[15];
    char x;
 
    printf ("Enter The name : ");
    scanf ("%s", NameArr);
        
    getlength(NameArr);
        
    reverseArr(NameArr, reverseName);
        
    printf ("Do you need to enter another Name?");
    scanf (" %c", x);
    
    while (x == 'N')
	{
		if (x == 'Y')
		{
			printf ("Enter The name : ");
		    scanf ("%s", NameArr);
		        
		    getlength(NameArr);
		        
		    reverseArr(NameArr, reverseName);
		        
		    printf ("Do you need to enter another Name?");
		    scanf (" %c", x);
		}
	}   
 
    
    return 0;
    
}

