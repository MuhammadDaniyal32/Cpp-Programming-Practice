#include<stdio.h>
#include<conio.h>

main()
{
	//for character value
	
	char ch ;
	printf ("Enter one character only:");
	scanf ("%c",&ch);
	printf ("The value is : %c\n",ch);
	
	//for string value
	
	char st[30];
	printf ("Enter a string no space:");
	scanf ("%s",&st);
	printf ("The value is : %s\n\n",st);
	getchar();
	
	//for string value with space
	
	char str[50];
	printf ("Enter a string with space:");
	gets(str);
	printf ("The value is : %s",str);
}
