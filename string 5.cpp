#include<stdio.h>
char a[20];
int sayac = 0;
int main(){
	
	gets(a);
	for(int i=0;a[i]!='\0';i++){
		sayac++;
	}
	printf("dizideki karakter sayisi:%d",sayac);
	return 0;
}
