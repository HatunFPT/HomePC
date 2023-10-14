#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main (){
	//khai bao phan tu
	int n;
	printf("Moi ban nhap so phan tu cua mang: ");
	scanf("%d",&n);
	//khai bao mang
	int mangSoNguyen[n];
	for(int i=0;i<n;i++){
		printf("Moi nhap phan tu thu %d cua mang: ",i+1);
		scanf("%d",&mangSoNguyen[i]);
	}
	int tong=0,dem=0;
	float diemTB=0;
	for(int i=0;i<n;i++){
		if(mangSoNguyen[i]%3==0){
			tong+=mangSoNguyen[i];
			dem++;
		}
	}
	
	return 0;
}

