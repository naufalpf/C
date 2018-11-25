#include<stdio.h>


int main()
{
int i,j,n[25][25];
 
for(i=0;i<=n;i++)
{
	for(j=1;j<=n;j++)
	{
	if((i=j)||j==(n-1)-i)
	{
	printf("*");
	}
	else
	{
	printf(" ");
	}
}
printf("\n");
}

return 0;
}
