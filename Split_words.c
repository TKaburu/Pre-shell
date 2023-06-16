#include <stdio.h>
#include <string.h>

int main (void)
{
	char *point;
	char str[] = "Simple shell will be easy";
	char *del = " ";

	point = strtok(str, del);

	while (point != NULL)
	{
		point = strtok(NULL, del);
		printf("%s\n", point);
	}

	/*If strtok fails return NULL*/
	if (point == NULL)
		return ('\0');
	return (0);	
}