#include<stdio.h>
struct student
{
	int rollno,idno;
	char name[20];
}s;
 struct student input()
{
struct student b;
	 printf("Enter your name : ");
	gets(b.name);
	printf("Enter your roll no. : ");
	scanf("%d",&b.rollno);
	printf("Enter your id no. : ");
	scanf("%d",&b.idno);
	return(b);
}

void display(struct student c)
{
	printf("Student name : %s\n",c.name);
	printf("Student roll no. : %d\n",c.rollno);
	printf("Student idno : %d",c.idno);
}



int main()
{
	struct student s1;
	s1=input();
	display(s1);
}
