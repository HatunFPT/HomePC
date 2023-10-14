//Lap 3 - bai 2

#include <stdio.h>

int main(){
	//Khai bao
	float a,b,nghiem;
	//nhap
	printf("Nhap a: ");
	scanf("%f", &a);
	printf("Nhap b: ");
	scanf("%f", &b);
	//in phuong trinh
	printf("\nPhuong trinh vua nhap la: %.2fx + %.2f = 0",a,b);
	//logic
	
	if(a == 0 ) {
		if(b == 0){
			printf("\nPhuong trinh co vo so nghiem.");
		}
		else {
			printf("\nPhuong trinh vo nghiem");
		}
	}
	else{
		nghiem = -b/a;
		printf("\nPhuong trinh co nghiem x = %.2f",nghiem);
	}
	
	return 0;
}

