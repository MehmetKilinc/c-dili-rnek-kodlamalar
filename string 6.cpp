#include<stdio.h>
#include<string.h>
char a[50],b[50];
int main(){
	
	gets(a);
	gets(b);
	printf("%d\n",strcmp(a,b));//iki dizinin aynı olup olmadığını kontrol eder(sonuç 0 sa aynı -1 se farklıdır)
	printf("%d\n",strlen(a));  //a nın karakter sayısını basar
	strrev(a);    //a yı ters çevirir
	puts(a);
	strrev(a);   //a yı tekrar ters çevirir(eski haline getirir
	strcat(a,b);  //b yi a nın arkasına ekler
	puts(a);
	strcpy(a,b);  //b nin string değerini a ya atar
	puts(a);
	puts(strlwr(a));   //bütün harfleri küçük harfle yazdırır
	return 0;
}
