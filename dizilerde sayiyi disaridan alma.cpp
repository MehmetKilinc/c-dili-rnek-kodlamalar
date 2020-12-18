#include <stdio.h>
int a[];
int main(){
	for (int i=1;i <=10;i++){
		printf("dizinin %d. elemanini giriniz:",i);
		scanf("%d",&a[i-1]);
	}	
	for(int i=1;i <=10;i++){
		printf("%d. eleman = %d\n",i,a[i-1]);
	}	
	return 0;
}
