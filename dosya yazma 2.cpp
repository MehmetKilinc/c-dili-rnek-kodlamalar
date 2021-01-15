#include<stdio.h>
char a,b,c,d;
main()
{
	FILE *dosya;
	dosya=fopen("dosyanýn tam konumu","r");
	a=getc(dosya);      //dosyadaki yazýlarý a ya aktarýr
	printf("%c",a);
}
