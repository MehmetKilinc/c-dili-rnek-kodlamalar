#include <stdio.h>
int a[3][3];
int main(){
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("%d %d elemanini giriniz:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("%d  :",a[i][j]);
			
		}
		printf("\n");
	}
	return 0;
}
