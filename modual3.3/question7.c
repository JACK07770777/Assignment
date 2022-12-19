//WAP Find out length of string without using inbuilt function//

#include<stdio.h>
int main()
{
	char s[100];
	 int i;
	
	printf("Enter The String:-->");
	scanf("%s",s);
	
	for (i=0;s[i]=!0;++i);
	
	printf("Length Of String %d",i);
	
	return 0;
}
