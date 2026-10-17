#include <stdio.h>


int fun(int a,int c[])
{
	int i;
	for (i = 0; a > 0; i++)
		c[i] = a % 2;
		a /= 2;
	return i;
}
main()
{
	int a;
	int c[100]; 
	int i,n;
	scanf("%d", &a);
	n = fun(a,c);
	for (i=n-1; i >= 0; i--)
	printf("%d", c[i]);
	return 0;
}