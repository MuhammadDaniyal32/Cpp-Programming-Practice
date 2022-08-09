#include<stdio.h>
#include<conio.h>
struct emp{
	int id;
	char name;
	}emp1,emp2;
	main()
	{
		printf("Employee Details\n\n");
		printf("Enter Employee Id: ");
		scanf("%d",&emp1.id);
		printf("\nEnter Employee Name: ");
		scanf("%s",&emp1.name);
		printf("\nEnter Employee Id ");
		scanf("%d",&emp2.id);
		printf("\nEnter Employee Name ");
		scanf("%s",&emp2.name);
		printf("\n\nEmployee Details\n\n");
		printf("employee id: %d",emp1.id);
		printf("\nEmployee Name %s",emp1.name);
		printf("\n\nEmployee Id %d",emp2.id);
		printf("\nEmployee Name: %s",emp2.name);
		getch();
		
	}
