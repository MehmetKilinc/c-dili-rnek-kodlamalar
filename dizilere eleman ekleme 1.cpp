#include <stdio.h>
int a[10];
int main(){
	printf("diziye eklemek istediğiniz sayiyi giriniz:");
	scanf("%d",&a[0]);
	printf("dizinin ilk elemani : %d\n",a[0]);
	printf("dizinin ilk elemani : %d",*a);                //pointer kullanarakta dizideki elemana ulaşabiliyoruz
	return 0;
}
