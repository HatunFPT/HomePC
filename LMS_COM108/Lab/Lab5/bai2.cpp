#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkYear(int a){
	int check=0;
	if(a%400 == 0){
		check=1;
	}
	if(a%4 == 0 && a%100 != 0){
		check=1;
	}
	return check;
}
int main() {
	int year;
	do{
		printf("\nMoi nhap nam can kiem tra: ");
		scanf("%d",&year);
		if(checkYear(year) == 1){
			printf("\n\t%d la nam nhuan.",year);
		}
		else{
			printf("\n\t%d khong phai la nam nhuan.",year);
		}
	}while (1);

	return 0;
}
