#include<stdio.h>
#include<conio.h>

int max(int num1, int num2)
{
	
	int result;
	
	if (num1>num2)
	  result=num1;
    else
     result = num2;
     
    return result; 
}


main()
{
	int a= 900;
	int b= 700;
	int ret;
	
	ret = max (a,b);
	
	printf ("Max value is : %d\n",ret);

    getch();
	
}
