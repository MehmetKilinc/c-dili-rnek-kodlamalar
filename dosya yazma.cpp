#include<stdio.h>
main(){
	FILE *dosya;
	dosya=fopen("dosyan�n tam konumunu yaz","w");  // w yerine a yazarsak her �al��t�rd���m�zda yazd�r�r
	putc('A',dosya);          //dosyan�n i�ine A yazd�r�r
	fclose(dosya);              //dosyay� kapat�r
	
}

