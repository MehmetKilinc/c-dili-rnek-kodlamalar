#include<stdio.h>
char a[10];
int main()
{
	//scanf te bo�luklu girersen bo�luktan sonras�n� almaz ama gets komutu al�r
	gets(a);
	printf("%s\n",a); //1. ekrana yazd�rma yy�ntemi
	puts(a);          //2. ekrana yazd�rma y�ntemi
	printf(a);        //3.ekrana yazd�rma y�ntemi
	return 0;
}
