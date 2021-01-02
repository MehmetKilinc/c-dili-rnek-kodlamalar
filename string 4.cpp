#include<stdio.h>
char a[10];
int sayac = 0;
int main()
{
	
	gets(a);
	for(int i=0;i<20;i++){
		if(a[i]=='A' || a[i]=='a'){
			sayac++;
		}
	}
	printf("a sayisi : %d",sayac);
	
	return 0;
}
