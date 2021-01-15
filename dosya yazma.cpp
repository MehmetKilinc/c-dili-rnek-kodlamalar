#include<stdio.h>
main(){
	FILE *dosya;
	dosya=fopen("dosyanýn tam konumunu yaz","w");  // w yerine a yazarsak her çalýþtýrdýðýmýzda yazdýrýr
	putc('A',dosya);          //dosyanýn içine A yazdýrýr
	fclose(dosya);              //dosyayý kapatýr
	
}

