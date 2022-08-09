#include<stdio.h>
#include<conio.h>

int mult (int x, int y);

int main()
{
	int x,a=8,b=8;
	int y;
	
	printf ("please input two number to be multiplied: ");
	scanf ("%d",&x);
	scanf ("%d",&y);
	printf ("The product of your two number is %d\n", mult(x,y) );
	printf ("The product of your two number is %d\n", mult(a,b) );
	
	getch();
}

int mult (int x, int y)
{
	return x*y;
}
