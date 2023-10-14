#include <stdio.h>
#include <math.h>

int main (){
	int x;
	printf("Nhap x: ");
	scanf("%d",&x);
	if(sqrt(x)==(int)sqrt(x)){
		printf("day la so chinh phuong.");
	} else{
		printf("day khong la so chinh phuong.");
	}
	return 0;
}

