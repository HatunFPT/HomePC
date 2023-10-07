#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int tinhtong(int a, int b, int tong){
	tong=a+b;
	return tong;
	}
int main() {
	int a,b,tong =0;
	printf("nhap a: ");
	scanf("%d",&a);
	printf("nhap b: ");
	scanf("%d",&b);
	tinhtong(a,b,tong);
	printf("Tong = %d", tong);
	return 0;
}



