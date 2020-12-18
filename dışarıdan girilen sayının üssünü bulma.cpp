#include <stdio.h>
int taban,us,sonuc=1;
int main(){
aa:
	printf("tabani giriniz:");
	scanf("%d",&taban);
	printf("ussu giriniz:");
	scanf("%d",&us);
	for(int i=0;i <us;i++){
		sonuc=taban*sonuc;
	}
	printf("%d\n",sonuc);
	sonuc=1;
	goto aa;
return 0;
}

