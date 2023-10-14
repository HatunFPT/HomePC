#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int n;
	printf("Moi ban nhap so phan tu cua mang: ");
	scanf("%d",&n);
	//khai bao mang
	int mangSoNguyen[n];
	for(int i=0;i<n;i++){
		printf("Moi nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&mangSoNguyen[i]);
	}
	int max,min;
	max=min=mangSoNguyen[0];
	for(int i=1;i<n;i++){
		if(max<mangSoNguyen[i]){
			max=mangSoNguyen[i];
		}
		if(min>mangSoNguyen[i]){
			min=mangSoNguyen[i];
		}
	}
	printf("Max = %d  Min = %d ",max,min);
	return 0;
}

