#include<stdio.h>
#include<string.h>
char a[50],b[50];
int main(){
	
	gets(a);
	gets(b);
	printf("%d\n",strcmp(a,b));//iki dizinin ayn� olup olmad���n� kontrol eder(sonu� 0 sa ayn� -1 se farkl�d�r)
	printf("%d\n",strlen(a));  //a n�n karakter say�s�n� basar
	strrev(a);    //a y� ters �evirir
	puts(a);
	strrev(a);   //a y� tekrar ters �evirir(eski haline getirir
	strcat(a,b);  //b yi a n�n arkas�na ekler
	puts(a);
	strcpy(a,b);  //b nin string de�erini a ya atar
	puts(a);
	puts(strlwr(a));   //b�t�n harfleri k���k harfle yazd�r�r
	return 0;
}
