#include <stdio.h>
int toplam;
int a[10];
int main(){
	for (int i=1;i <=10;i++){
		printf("dizinin %d. elemanini giriniz:",i);
		scanf("%d",&a[i-1]);
	}	
	for(int i=1;i <=10;i++){
		printf("%d. eleman = %d\n",i,a[i-1]);
		toplam+=a[i-1];
	}
	printf("toplam = %d\n",toplam);
	printf("dizideki elemanlarin ortalamasi = %f",float(toplam/10.0));
	return 0;
}
