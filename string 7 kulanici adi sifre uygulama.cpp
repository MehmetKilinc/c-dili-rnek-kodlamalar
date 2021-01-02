#include<stdio.h>
#include<string.h>

char kadi[50],sifre[50];   //kadi:hello  sifre:12345
int a,b,hak=3;
int main(){
	do{
	hak--;
	printf("kullanici adinizi giriniz:");
	gets(kadi);
	printf("sifrenizi giriniz:");
	gets(sifre);
	a = strcmp(kadi,"hello");
	b = strcmp(sifre,"12345");
	if(a==0&&b==0){
	
	printf("giris basarili.");
	break;
	}
	else{
	
	printf("giris basarisiz.");
	}
	
	}while(hak!=0);
	
	return 0;
}
