#include <stdio.h>
int i,j,x;
int main(){
	printf("bir sayi giriniz:");
	scanf("%d",&x);
	for(i=1;i <=x;i++){
		for(j=1;j <=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}	
	for(i=x-1;i >=0;i--){
		for(j=1;j <=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
