#include<stdio.h>

int main()
{
	int i,n,j;
	char count='A';
	printf("Enter numbers of rows : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" %c ",count);
			count+=1;
		}
		printf("\n");
	}
}