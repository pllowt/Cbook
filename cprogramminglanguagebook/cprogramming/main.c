#include <stdio.h>

#define TAB '\t'
#define BACKSPACE '\b'
#define BACKSLASH '\\'


int main(void)
{
	/*
		Write a program to copy its input to its output replace tab with \t, backspace \b and backslash \\
	*/
	int c;
	
	while ((c = getchar()) != EOF)
	{
		if (c == TAB)
			printf("\\t");
		if (c == BACKSPACE)
			printf("\\b");
		if (c == BACKSLASH)
			printf("\\\\");
		else
			putchar(c);
	}
	
	return 0;
}