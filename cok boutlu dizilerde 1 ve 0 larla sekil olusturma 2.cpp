#include <stdio.h>
int a[5][5];
main()
{
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			if(i>=j)
			a[i][j]=1;
			else
			a[i][j]=0;
		}
	}
		for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
		 	printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
