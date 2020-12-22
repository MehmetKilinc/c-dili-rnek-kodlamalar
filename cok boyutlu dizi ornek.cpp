#include <stdio.h>
int a[50][50],boyut;
main()
{
	printf("boyut giriniz(maksimum 50):");
	scanf("%d",&boyut);
	for(int i=0;i<boyut;i++)
	{
		for(int j=0;j<boyut;j++)
		{
			if(i>=j)
			a[i][j]=1;
			else
			a[i][j]=0;
		}
	}
		for(int i=0;i<boyut;i++)
	{
		for(int j=0;j<boyut;j++)
		{
		 	printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
