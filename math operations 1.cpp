#include<stdio.h>
#include<conio.h>

main()
{
	int a= 12;
	int b= 15;
	float q=20.23,w=34.222;
	double p=50.2222,y=22.3434;
	
	float t=q/w;
	double z=p/y;
	
	int c=a+b;
	int d=a-b;
	int e=a*b;
	int f=a/b;
	printf ("a=%d\n",a);
	printf ("b=%d\n",b);
	printf ("the addition is    =%d\n",c);
	printf ("the subtraction is =%d\n",d);
	printf ("the product is     =%d\n",e);
	printf ("the divison is     =%d\n",f);
	
	printf ("divison by using float  is = %f\n",t);
	printf ("divison by using double is = %.12f\n",z);
	getch();
}
