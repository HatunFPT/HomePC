#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	int a,b;
	printf("Nhap a= ");
	scanf("%d",&a);
	printf("Nhap b= ");
	scanf("%d",&b);
	int chuvi,dientich;
	chuvi=a+a+b+b;
	dientich=a*b;
	printf("Chu vi = %d",chuvi);
	printf("\nDien tich = %d",dientich);
	return 0;
}
