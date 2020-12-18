#include <stdio.h>
int a[10]={1,4,6,3,854,5,3,456,87,4};
int enk=a[0];
int enb=a[0];
int main(){
	for(int i=1;i<=;i++){
		if(a[i] > enb)
		enb=a[i];
		if(a[i] <enk)
		enk=a[i];
	}
	printf("en buyuk sayi : %d\nen kucuk sayi : %d",enb,enk);
	
}
