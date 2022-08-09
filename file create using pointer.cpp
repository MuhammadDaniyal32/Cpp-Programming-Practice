#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

main(){
	int salary ;
	int age ;
	char name[20];
	
	FILE * ptr;
	ptr = fopen("def.txt","w");
	
	if(ptr==NULL)
	{
		printf("Error!");
	}
	
	printf ("Enter name: ");
	scanf ("%s",&name);
	
	printf ("Enter age");
	scanf ("%d",&age);
	
	printf ("Enter salary");
	scanf ("%d",&salary);
	
	fprintf(ptr, "Name = %s\n",name);
	
	fprintf(ptr, "Age = %d\n",age);
	
	fprintf(ptr, "Salary = %d\n",salary);
	
	getch();
}
