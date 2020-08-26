#include<stdio.h> 

int main()
{
	struct date
		{
		 int d1,m,y;
		}d; 
	//struct date d;
	printf("Enter the today's date : ");
	scanf("%d/%d/%d",&d.d1,&d.m,&d.y);
	printf("Date : %d/%d/%d\n",d.d1,d.m,d.y);
}
