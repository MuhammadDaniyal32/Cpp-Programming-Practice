#include<stdio.h>
#include<conio.h>
struct student{
char name[50];
int roll;	
       };
       void display(struct student s1,struct student s2){
       	printf("output\name:%s",s1.name);
       	printf("\roll number:%d",s1.roll);
       	printf("output\nName:%s",s2.name);
	   }
	   main(){
	   	struct student s1,s2;
	   	printf("Enter Name student name:");
	   	scanf("%s",&s1.name);
	   	printf("enter roll number:");
	   	scanf("%d",&s1.roll);
	   	printf("Enter student name:");
	   	scanf("%s",&s2.name);
	   	display(s1,s2);
	   	getch();
	   	
	   }
