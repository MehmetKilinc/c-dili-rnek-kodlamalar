#include<stdio.h>
char a,b,c,d;
main()
{
	FILE *dosya;
	dosya=fopen("dosyan�n tam konumu","r");
	a=getc(dosya);      //dosyadaki yaz�lar� a ya aktar�r
	printf("%c",a);
}
