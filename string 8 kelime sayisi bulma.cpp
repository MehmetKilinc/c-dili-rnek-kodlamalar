#include<stdio.h>
char a[1000];
int sayac=0;

int toplam=0;
int main(){
	gets(a);
	for(int i=0;a[i]!='\0';i++){
		
		if(a[i]==' '){
			sayac++;
		
		}
		else
		toplam++;
	}
	printf("toplam harf sayisi:%d\n",toplam);
	printf("kelime sayisi %d",sayac+1);
	
	return 0;
}
