#include <stdio.h>
#include <math.h>

int main(){
	float PI=3.14;
	float bankinh;
	printf("Moi nhap vao ban kinh cua hinh tron: ");
	scanf("%f",&bankinh);
	float chuvi,dientich;
	chuvi=2*PI*bankinh;
	dientich=PI*pow(bankinh,2);
	printf("Chu vi hinh tron = %.2f\n",chuvi);
	printf("Dien tich hinh tron = %.2f",dientich);
}
