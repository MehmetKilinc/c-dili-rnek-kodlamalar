#include <stdio.h>
int a[10]={1,2,3,4,5,6,7,8,9,0};
int main(){
	for(int i=1;i <=10;i++){
		printf("%d . eleman = %d\n",i,a[i-1]);
	}
	return 0;
}
