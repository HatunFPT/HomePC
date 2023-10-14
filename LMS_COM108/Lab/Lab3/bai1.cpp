#include <stdio.h> 
int main(){
	float diem;
	do{
		printf("Nhap diem: ");
		scanf("%f",&diem);
		if(diem<0||diem>10){
			printf("Loi roi! Nhap diem trong khoang tu 0-10.\n");
		}
	} while(diem<0||diem>10);
	if(diem<3.5){
		printf("Hoc luc kem\n");
	}
	else if(diem<5){
		printf("Hoc luc yeu\n");
	}
	else if(diem<6.5){
		printf("Hoc luc trung binh\n");
	}
	else if(diem<8){
		printf("Hoc luc kha\n");
	}
	else if(diem<9){
		printf("Hoc luc gioi\n");
	}
	else{
		printf("Hoc luc xuat sac\n");
	}
}
