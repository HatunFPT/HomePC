#include <stdio.h>

int main (){
	int max,min;
	printf("Nhap max: ");
	scanf("%d",&max);
	printf("Nhap min: ");
	scanf("%d",&min);
	
	int tong=0;
	int tinh=min;
	while (tinh<=max){
		if(tinh%2==0){
			tong+=tinh;
		}
		tinh++;
	}
	printf("Tong = %d",tong);
	return 0;
}

