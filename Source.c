#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main() {
	char S[] = "RizkyKhapidsyah";
	char* p;

	/* Cara 1 */
	p = S;

	for (int i = 0; i < 16; i++)
	{
		printf("%c", *p);
		p++;
	}

	puts("");

	p--;

	for (int i = 0; i < 16; i++)
	{
		printf("%c", *p);
		p--;
	}

	printf("\n");

	p = S;
	
	for (int i = 0; i < 16; i++)
	{
		printf("%c", *p);
		p++;
	}
	_getch();
	return 0;
}