#include <stdio.h>
#include <stdlib.h>

int main(){
	int chonCN;
	do{
		printf("--------MENU--------\n");
		printf("1. Thong tin mon hoc\n");
		printf("2. Luong khi ra truong\n");
		printf("3. Thong tin ve cac thanh vien trong lop\n");
		printf("-1. Thoat\n");
		printf("-------------------\n");
		printf("Moi ban chon chuc nang: ");
		scanf("%d",&chonCN);
		fflush(stdin);
		switch(chonCN){
			case 1:{
				//
				char ten[50];
				printf("Nhap ten mon: ");
				gets(ten);
				//
				int soTinChi;
				printf("Nhap so tin chi: ");
				scanf("%d",&soTinChi);
				//
				float diem;
				printf("Nhap diem mong muon: ");
				scanf("%f",&diem);
				//
				printf("\nThong tin vua nhap la: \n");
				printf("\tMon hoc: %s\n",ten);
				printf("\tSo tin chi: %d\n",soTinChi);
				printf("\tDiem: %.2f\n",diem);
				break;
			}
			case 2:{
				printf("2. ");
				break;
			}
			case 3:{
				printf("3. ");
				break;
			}
			case -1:{
				printf("Thoat!");
				exit(0);
				break;
			}
			default :{
				printf("Khong co chuc nang nay. Moi chon lai!");
				break;
			}
		}
	} while (1);
	return 0;
}
