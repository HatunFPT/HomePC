#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct sv {
	char hoTen[50];
	float diem;
	char hocLuc[50];
};
//void nhap
void nhap(sv sinhVien[],int n){
	for(int i=0;i<n;i++){
		printf("Thong tin sinh vien thu %d :\n",i+1);
		printf("Ho va ten: ");
		gets(sinhVien[i].hoTen);
		printf("Diem: ");
		scanf("%f",&sinhVien[i].diem);
		fflush(stdin);
		if(sinhVien[i].diem < 5){
			strcpy(sinhVien[i].hocLuc, "Yeu");
		} 
		else if(sinhVien[i].diem <= 6.5){
			strcpy(sinhVien[i].hocLuc,"Trung binh");
		}
		else if(sinhVien[i].diem <= 8){
			strcpy(sinhVien[i].hocLuc,"Kha");
		}
		else if(sinhVien[i].diem <= 9){
			strcpy(sinhVien[i].hocLuc,"Gioi");
		}
		else {
			strcpy(sinhVien[i].hocLuc,"Xuat sac");
		}
	}
}

//void xuat
void xuat(sv sinhVien[],int size){
	for(int i=0;i<size;i++){
		printf("Thong tin sinh vien thu %d:\n",i+1);
		printf("\tHo ten: ");
		puts(sinhVien[i].hoTen);
		printf("\tDiem: %.2f\n",sinhVien[i].diem);
		printf("\tXep loai hoc luc: ");
		puts(sinhVien[i].hocLuc);
	}
}

//void sap xep

int main (){
	int size;
	printf("Moi nhap so sinh vien: ");
	scanf("%d",&size);
	fflush(stdin);
	sv sinhVien[size];
	printf("Moi nhap thong tin danh sach sinh vien: \n");
	nhap(sinhVien,size);
	sv steb;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(sinhVien[i].diem>sinhVien[j].diem){
				steb=sinhVien[i];
				sinhVien[i]=sinhVien[j];
				sinhVien[j]=steb;
			}
		}
	}
	printf("Danh sach sinh vien:\n");
	xuat(sinhVien,size);
	
	return 0;
}

