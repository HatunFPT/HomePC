//yc1 xay dung menu chua thong tin
//yc 2 xay dung 10 chuc nang
//yc 3 Nang cap chuong trinh (su dung ham)

//thu vien
//ham main
#include <stdio.h>
#include <math.h>
//ham kiem tra so nguyen tra ve gia tri 1 la true 0 la false
int checkSoNguyen(float number){
	if(number == (int)number){
		return 1;
	}
	else{
		return 0;
	}
}
//ham check so nguyen to kt so 5 i 234
int checkSoNguyenTo(float x){
	int check=1;
	for(int i=2;i<x;i++){
		if((int)x%i==0){
			check=0;
			break;
		}
	}
	return check;
}
//cach 1 check so chinh phuong bang for
int checkSoChinhPhuongFor(float x){
	int check=0;
	for(int i=1;i<x;i++){
		if(i*i == x){
			check=1;
			break;
		}
	}
	return check;
}
//cach 2 check so chinh phuong bang sqrt()
int checkSoChinhPhuongInt(float x){
	int check;
	check=checkSoNguyen(sqrt(x));
	return check;
}
int main(){
	int chonCN=0;
	do{
		printf("----------MENU----------\n");
		printf("1. Kiem tra so nguyen.\n");
		printf("2. Tim UCLN, BCNN.\n");
		printf("3. Tinh tien hat karaoke.\n");
		printf("4. Tinh tien dien.\n");
		printf("5. Doi tien le.\n");
		printf("6. Vay theo thang.\n");
		printf("7. Vay theo nam.\n");
		printf("8. Sap xep thon tin sinh vien.\n");
		printf("9. Game LOTT.\n");
		printf("10. Tinh toan phan so.\n");
		printf("0. Thoat\n");
		printf("------------------------\n");
		printf("Moi chon chuc nang can dung: ");
		scanf("%d",&chonCN);
		switch (chonCN){
			case 1:{
				printf("Dang thuc hien chuc nang so 1\n");
				float x;
				do{
					printf("Moi ban nhap vao so nguyen: ");
					scanf("%f",&x);	
					if(checkSoNguyen(x)==0){
						printf("Day khong phai so nguyen. Moi nhap lai.\n");
					}
				} while (checkSoNguyen(x)==0);
				//check so nguyen to la so >1 vao chia hêt chô 1 va chinh no
				if(x>2){
					//check so nguyen to
					if(checkSoNguyenTo(x)==1){
						printf("%.0f la so nguyen to.\n",x);
					} else {
						printf("%.0f khong la so nguyen to.\n",x);
					}
					
				} else{
					printf("%.0f khong phai la so nguyen to\n",x);
				}
				//check so chinh phuong = so nguyen * so nguyen
				//cach 1 su dung for
				if(checkSoChinhPhuongFor(x)==1){
					printf("%.0f la so chinh phuong.\n",x);
				}
				else{
					printf("%.0f khong la so chinh phuong.\n",x);
				}
				//cach 2
				printf("Cach 2.\n");
				if(checkSoChinhPhuongInt(x)==1){
					printf("%.0f la so chinh phuong.\n",x);
				} else{
					printf("%.0f khong la so chinh phuong.\n",x);
				}
				break;
			}
			case 2:{
				printf("Dang thuc hien chuc nang so 2\n");
				break;
			}
			case 3:{
				printf("Dang thuc hien chuc nang so 3\n");
				break;
			}
			case 4:{
				printf("Dang thuc hien chuc nang so 4\n");
				break;
			}
			case 5:{
				printf("Dang thuc hien chuc nang so 5\n");
				break;
			}
			case 6:{
				printf("Dang thuc hien chuc nang so 6\n");
				break;
			}
			case 7:{
				printf("Dang thuc hien chuc nang so 7\n");
				break;
			}
			case 8:{
				printf("Dang thuc hien chuc nang so 8\n");
				break;
			}
			case 9:{
				printf("Dang thuc hien chuc nang so 9\n");
				break;
			}
			case 10:{
				printf("Dang thuc hien chuc nang so 10\n");
				break;
			}
			case 0:{
				printf("Thoat\n");
				break;
			}	
		}
	} while (chonCN !=0);
	return 0;
}
