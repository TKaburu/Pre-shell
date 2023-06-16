#include <string.h>
#include <stdio.h>

int main(void)
{
	char *point;
	char str[] = "Simple shell will be easy";
	char *del = " ";

	point = strtok(str, del);
	printf("%s\n", str);
	return (0);
}