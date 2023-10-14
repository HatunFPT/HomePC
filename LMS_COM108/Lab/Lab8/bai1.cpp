#include <stdio.h>
#include <string.h>
struct sinhvien{
	char maSV[10];
	char tenSV[50];
	char nganhHoc[50];
	float diemTB;
};
int main (){
	int size;
	printf("Nhap so sinh vien: ");
	scanf("%d",&size);
	fflush(stdin);
	sinhvien DSSV[size];
	for(int i=0;i<size;i++){
		printf("Nhap MaSV: ");
		gets(DSSV[i].maSV);
		printf("Nhap TenSV: ");
		gets(DSSV[i].tenSV);
		printf("Nhap nganh hoc: ");
		gets(DSSV[i].nganhHoc);
		printf("Nhap diem trung binh: ");
		scanf("%f",&DSSV[i].diemTB);
		fflush(stdin);
	}
	
	sinhvien steb;
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			if(DSSV[i].diemTB<DSSV[j].diemTB){
				steb=DSSV[i];
				DSSV[i]=DSSV[j];
				DSSV[j]=steb;
			}
		}
	}
	for(int i=0;i<size;i++){
		printf("Thon tin sinh vien:\n");
		printf("Nhap MaSV: %s\n",DSSV[i].maSV);
		printf("Nhap TenSV: %s\n",DSSV[i].tenSV);
		printf("Nhap nganh hoc: %s\n",DSSV[i].nganhHoc);
		printf("Nhap diem trung binh: %.2f\n",DSSV[i].diemTB);	
	}
	char timSV[10];
	printf("Nhap MaSV can tim: ");
	gets(timSV);
	for(int i=0;i<size;i++){
		if(strcmp(DSSV[i].maSV,timSV)==0){
			printf("Tim thay sinh vien:\n");
			printf("Nhap MaSV: %s\n",DSSV[i].maSV);
			printf("Nhap TenSV: %s\n",DSSV[i].tenSV);
			printf("Nhap nganh hoc: %s\n",DSSV[i].nganhHoc);
			printf("Nhap diem trung binh: %.2f\n",DSSV[i].diemTB);
			break;
		}
		else{
			printf("Khong tim thay sinh vien:\n");
		}
	}
	return 0;
}

