#include<stdio.h>
int main()
{
	int i,j,k;
	
	
	printf("Enter Number Of Line Of Pattern:-");
	scanf("%d",&k);
	
	
	for(i=1;i<k;i++)
	{
		for(j=1;j<i;j++)
		{
			
			printf("%d",(j+1)%2);
		}
	
	printf("\n ");
	
	
	}
	
	return 0;
}