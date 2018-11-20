#include <stdio.h>
#include <locale.h>
#include <iostream>
#include <math.h>

int main()
{
	setlocale(LC_ALL, "");
	int x, a = 5, b = 6, c = 8;
	x = b;
	b = c;
	c = x;
	printf("%d,%d", a, b,c);
	system("pause");
}