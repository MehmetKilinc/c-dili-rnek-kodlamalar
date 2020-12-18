#include <stdio.h>
int a[10];
int main(){
	printf("diziye eklemek istediðiniz sayiyi giriniz:");
	scanf("%d",&a[0]);
	printf("dizinin ilk elemani : %d\n",a[0]);
	printf("dizinin ilk elemani : %d",*a);                //pointer kullanarakta dizideki elemana ulaþabiliyoruz
	return 0;
}
