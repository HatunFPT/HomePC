#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int checkSoChinhPhuong(int n){
	if(sqrt(n)==(int)sqrt(n)){
		return 1;
	}
	else{
		return 0;
	}
}
int main() {
	//khai bao
	int n;
	//nhap n
	printf("nhap n: ");
	scanf("%d",&n);
	
	check=checkSoChinhPhuong(n);
	
	if(check==1){
		printf("n la so chinh phuong.");
	}
	else{
		printf("n khong la so chinh phuong.");
	}
	return 0;
}



