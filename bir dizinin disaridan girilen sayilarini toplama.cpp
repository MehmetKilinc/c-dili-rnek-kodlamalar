#include <stdio.h>
int toplam=0;
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
	printf("dizideki elemanlarin toplami = %d",toplam);
	return 0;
}
