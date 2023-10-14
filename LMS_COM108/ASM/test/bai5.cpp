#include <stdio.h>

int doitien(int soTien,int menhGia){
	int soToTien;
	soToTien=soTien/menhGia;
	printf(" Co %d to tien menh gia %d\n",soToTien,menhGia);
	soTien %= menhGia;
	return soTien;
}


int main(){
	//khai bao
	int soTien;
	int menhGia[]={500,200,100,50,20,10,5,2,1};
	int soToTien=0;
	//Nhap so tien
	printf("Moi ban nhap vao so tien can doi: ");
	scanf("%d",&soTien);
	for(int i=0;i<9;i++){
		soTien=doitien(soTien,menhGia[i]);
	}
	
}
