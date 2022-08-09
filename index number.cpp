#include<stdio.h>
#include<conio.h>

struct telephone
{
	int number;
	int age;
   } index,index2;
   main()
   {
   	index.number =12345;
   	index.age =20;
   	
   	printf("telephone number :%d\n",index.number);
   	printf("age is:%d\n",index.age);
   	
   	
   	index2.number=456456;
   	index2.age= 12;
   	
   	printf("telephone number: %d\n",index2.number);
   	printf("age is:%d\n",index2.age);
   	
   	getch();
   	
   	
   }
