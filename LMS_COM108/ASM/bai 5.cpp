#include <stdio.h>

int soToTien(int sotien, int menhgia){
	return sotien/menhgia;
}

int main(){
	int menhGia[9]={500,200,100,50,20,10,5,2,1};
	int soTien;
	printf("Moi ban nhap so tien: ");
	scanf("%d",&soTien);
	printf("Bat dau thuc hien doi tien: \n");
	for(int i=0;i<9;i++){
		printf(" %d to %d dong\n",soToTien(soTien,menhGia[i]),menhGia[i]);
		soTien=soTien-soToTien(soTien,menhGia[i])*menhGia[i];
	}
}
