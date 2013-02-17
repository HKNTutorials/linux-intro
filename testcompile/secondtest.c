#include <stdio.h>
#include <stdlib.h>

int main()
{
	int * sum;
	// Place a semicolon here at the end of theNumber!
	int theNumber
	printf("Enter a number:\n");
	do
	{
		scanf("%d", &theNumber);
		(*sum) += theNumber;
	}while(theNumber != 0);
	
	printf("The sum is: %d\n", *sum);
	return 0;
}
