#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int max3Number(int a,int b,int c){
	int max=a;
	if(b>max){
		max=b;
	}
	if(c>max){
		max=c;
	}
	return max;
}
int main() {
	int a,b,c;
	do{
		printf("\nNhap a= ");
		scanf("%d",&a);
		printf("Nhap b= ");
		scanf("%d",&b);
		printf("Nhap c= ");
		scanf("%d",&c);
		printf("\t\nMax cua 3 so vua nhap la: %d\n",max3Number(a,b,c));
	} while(1);
	
	return 0;
}
