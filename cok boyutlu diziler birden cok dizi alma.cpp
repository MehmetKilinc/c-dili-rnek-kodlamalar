#include <stdio.h>
int a[3][3],b[3][3],c[3][3];
int main(){
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("1.matrisin %d %d elemanini giriniz:",i,j);
			scanf("%d",&a[i][j]);
				
			printf("2. matrisin %d %d elemanini giriniz:",i,j);
			scanf("%d",&b[i][j]);
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	
	

	
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("%d  :",a[i][j]);
			
		}
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("%d  :",b[i][j]);
			
		}
		
		printf("\n");
	}
	for(int i=0;i<3;i++){
		for(int j =0;j<3;j++){
			printf("%d  :",c[i][j]);
			
		}
		
		printf("\n");
	}
	return 0;
}
