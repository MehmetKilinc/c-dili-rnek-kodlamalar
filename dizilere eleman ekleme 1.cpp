#include <stdio.h>
int a[10];
int main(){
	printf("diziye eklemek istedi�iniz sayiyi giriniz:");
	scanf("%d",&a[0]);
	printf("dizinin ilk elemani : %d\n",a[0]);
	printf("dizinin ilk elemani : %d",*a);                //pointer kullanarakta dizideki elemana ula�abiliyoruz
	return 0;
}
