#include<stdio.h>
int main()
{
int a[20],*b,i,j,k,m;
b=&a[0];
printf("Enter the no.");
//for(m=0;m!='\0';m++)
scanf("%d",&a[m]);
for(i=0;*(b+i)!='\0';i++);
printf("%d",i);
for(j=0;j<=(i-1);j++)
	{
		if(*(b+j)>*(b+j+1))
			{
				k=*(b+j);
				*(b+j)=*(b+j+1);
				*(b+j+1)=k;
			}
	}
//for(m=0;m!='\0';m++)
//printf("%d",&a[m]);

}
