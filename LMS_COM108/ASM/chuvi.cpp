#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void chuVi1(){
	int chuvi,a,b;
	printf("\nNhap chieu dai: ");
	scanf("%d",&a);
	printf("\nNhap chieu rong: ");
	scanf("%d",&b);
	chuvi=a+a+b+b;
	printf("\nchu vi hcn = %d",chuvi);
}
void chuVi2(int a, int b){
	int chuvi;
	chuvi=a+a+b+b;
	printf("\nchu vi hcn = %d",chuvi);
}
int chuVi3(){
	int chuvi,a,b;
	printf("\nNhap chieu dai: ");
	scanf("%d",&a);
	printf("\nNhap chieu rong: ");
	scanf("%d",&b);
	chuvi=a+a+b+b;
	return chuvi;
}
int chuVi4(int a,int b){
	int chuvi;
	chuvi=a+a+b+b;
	return chuvi;
}

int main (){
	//cach 1
	chuVi1();
	//cach 2;
	int a,b;
	printf("\nNhap chieu dai: ");
	scanf("%d",&a);
	printf("\nNhap chieu rong: ");
	scanf("%d",&b);
	chuVi2(a,b);
	//cach 3
	int chuvi;
	chuvi=chuVi3();
	printf("\nchu vi = %d",chuvi);
	//
	printf("\nNhap chieu dai: ");
	scanf("%d",&a);
	printf("\nNhap chieu rong: ");
	scanf("%d",&b);
	chuvi=chuVi4(a,b);
	printf("\nchu vi = %d", chuvi);
	return 0;
}

