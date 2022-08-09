#include<stdio.h>
#include<conio.h>

main()
{
	char ch ;
	printf ("\nEnter Lower Cased Alphabet (a-z)");
	scanf ("%c",&ch);
	if (ch < 'a' || ch > 'z')
	printf ("\n Charater not lowerd case!!");
	else 
	
	switch(ch)
	{
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':	
		
		printf ("\n Charater is a vawel");
		break;
		
		default:
		printf ("\n Character is consonent");
		break;
	}
	
}
