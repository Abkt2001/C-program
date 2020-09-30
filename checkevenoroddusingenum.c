#include<stdio.h>
enum check
{
	true,false
};
enum check iseven(int x)
{
	if(x%2==0)
	return(true);
	else
	return(false);
}
int main()
{
	int z;
	enum check result;
	printf("Enter a no.");
	scanf("%d",&z);
	result=iseven(z);
	if(result==false)
		printf("Enter no. is odd");
	else
		printf("Enter no. is even");
	

}
