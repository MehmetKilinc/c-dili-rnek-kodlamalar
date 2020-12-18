#include <stdio.h>
int ilksayi=1,ikincisayi=1,temp,i;
int main(){
	printf("%d\n %d",ilksayi,ikincisayi);
	for(i=0;i <10;i++){
		temp=ilksayi+ikincisayi;
		printf("%d\n",temp);
		ilksayi=ikincisayi;
		ikincisayi=temp;
		
	}
	
	
	return 0;
}
