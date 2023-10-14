#include <stdio.h>
void swap(int *a,int *b){
	int steb;
	steb=*a;
	*a=*b;
	*b=steb;
}
int main() {
	int a,b;
	printf("Nhap a: ");
	scanf("%d",&a);
	printf("Nhap b: ");
	scanf("%d",&b);
	swap(&a,&b);
	printf("a = %d    b = %d",a,b);
	return 0;
}



