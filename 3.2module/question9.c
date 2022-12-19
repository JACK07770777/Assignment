#include<stdio.h>
int main()
{
	int a[5],i,max=0,min=0;
	
	
	printf("Enter  The Value:-");
	
	for(i=0;i<5;i++){
		
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++){
	   
	   if(a[i]>max)
	   {
	   	
	   	max=a[i];
	   }
	   
	   else{
	   	
	   	min=a[i];
	   }
	
	}
	
	printf("Minimum is %d\n",min);
	printf("Maximum is %d\n",max);
	
	
	
	
	return 0;
}