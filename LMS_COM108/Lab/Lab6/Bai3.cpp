#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void hoanVi(int a,int b){
	int steb;
	steb=a;
	a=b;
	b=steb;
}

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
	int steb=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(mangSoNguyen[i]>mangSoNguyen[j]){
				steb=mangSoNguyen[j];
				mangSoNguyen[j]=mangSoNguyen[i];
				mangSoNguyen[i]=steb;
			}
		}
	}
	for(int i=0;i<n;i++){
		printf("%d ",mangSoNguyen[i]);
		
	}
	
	
	return 0;
}

