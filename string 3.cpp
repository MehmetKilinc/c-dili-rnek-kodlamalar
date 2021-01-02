#include<stdio.h>
char a[10];
int main()
{
	//scanf te boþluklu girersen boþluktan sonrasýný almaz ama gets komutu alýr
	gets(a);
	printf("%s\n",a); //1. ekrana yazdýrma yyöntemi
	puts(a);          //2. ekrana yazdýrma yöntemi
	printf(a);        //3.ekrana yazdýrma yöntemi
	return 0;
}
