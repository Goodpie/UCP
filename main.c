#include <stdio.h>
#include "main.h"

int main(int argc, char* argv[])
{
	int inFlag, outFlag;
	char* inFile;
	char* outFile;

	inFlag = 0;
	outFlag = 0;

	if (argc != 5)
	{
		/* Invalid number of arguments to function correctly */
		printf("Invalid number of arguments\n");
		displayCorrectUsage();
	}
	else
	{
		/* Correct number of arguments. Check if valid arguments */
		if (*argv[1] == 'i')
		{
			inFlag = 1;
			inFile = argv[2];
		}
		else if (*argv[3] == 'i')
		{
			inFlag = 1;
			inFile = argv[4];
		}

		if (*argv[1] == 'o')
		{
			outFlag = 1;
			outFile = argv[2];
		}
		else if (*argv[3] == 'o')
		{
			outFlag = 1;
			outFile = argv[4];
		}

		/* Handel the error detection with the flags */
		if (inFlag == 1 && outFlag == 1)
		{
			printf("In File: %s\nOut File: %s\n", inFile, outFile);
		}
		else 
		{
			/* Display error message for each invalid argument */
			if (inFlag == 0)
			{
				printf("No in file argument was found\n");
			}
			if (outFlag == 0)
			{
				printf("No out file argument was found\n");
			}
			displayCorrectUsage();
		}

	}
}

void displayCorrectUsage()
{
	printf("Correct Usage:\n\t$ sortingAssignment i inFile o outfile\n");
}
