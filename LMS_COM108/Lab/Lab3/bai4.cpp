#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
	//Khai bao
	int chonCN;
	//Menu
	do{
	   //in ra menu
	   printf("\n----------MENU----------");
	   printf("\n1. Hoc luc");
	   printf("\n2. Giai phuong trinh");
	   printf("\n3. Tinh tien dien");
	   printf("\n0. Thoat");
	   printf("\n------------------------");
	   //chon chuc nang
	   printf("\nMoi ban chon chuc nang can dung: ");
	   scanf("%d", &chonCN);
	   //run
	   switch (chonCN){
			case 1:{
				printf("Chuc mung ban da chon than cong chuc nang so 1.");
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
				break;
			}
			case 2:{
				printf("Chuc mung ban da chon than cong chuc nang so 2.");
				//Khai bao
				//delta = b^2-4ac
				float a,b,c,delta;
				
				//nhap
				printf("Nhap a: ");
				scanf("%f",&a);
				printf("Nhap b: ");
				scanf("%f",&b);
				printf("Nhap c: ");
				scanf("%f",&c);
				//in ra phuong trinh
				printf("\nPhuong trinh bac 2 vua nhap la:");
				printf("\n\t%.2fx^2 + %.2fx + %.2f = 0",a,b,c);
				//logic
				if(a == 0)
				{
					if( b == 0)
					{
						if(c == 0)
						{
							printf("\nPhuong trinh co vo so nghiem.");
						}
						else
						{
							printf("\nPhuong trinh vo nghiem.");
						}
					}
					else
					{
						printf("\nPhuong trinh co 1 nghiem = %.2f",-c/b);
					}
				}
				else 
				{
					delta = b*b-4*a*c;
					if (delta < 0)
					{
						printf("\nPhuong trinh vo nghiem");
					}
					else if (delta > 0)
					{
						printf("\nPhuong trinh co 2 nghiem rieng biet x1,x2:");
						printf("\n\tx1 = %.2f",(-b+sqrt(delta))/(2*a));
						printf("\n\tx2 = %.2f",(-b-sqrt(delta))/(2*a));	
					}
					else
					{
						printf("\nPhuong trinh co nghiem kep = %.2f",-b/(2*a));
					}
				}
				break;
			}
			case 3:{
				printf("Chuc mung ban da chon than cong chuc nang so 3.");
				//khai bao
				int sudung,tienDien;
				//nhap
				printf("Nhap so kWh su dung: ");
				scanf("%d",&sudung);
				//in ra
				printf("\nBan da su dung het %d kWh.", sudung);
				//logic
				if(sudung <= 50)
				{
					printf("\nTien dien cua ban la: %ddong", sudung*1678);
				}
				else if (sudung <= 100)
				{
					printf("\nTien dien cua ban la: %ddong",83900+(sudung-50)*1734);
				}
				else if (sudung <= 200)
				{
					printf("\nTien dien cua ban la: %ddong",170600+(sudung-100)*2014);
				}
				else if (sudung <= 300)
				{
					printf("\nTien dien cua ban la: %ddong",271300+(sudung-200)*2536);
				}
				else if (sudung <= 400)
				{
					printf("\nTien dien cua ban la: %ddong",398100+(sudung-300)*2834);
				}
				else
				{
					printf("\nTien dien cua ban la: %ddong",539800+(sudung-400)*2927);	
				}
				break;
			}
			case 0:{
				printf("0. Thoat");
				exit(0);
				break;
			}
			default :{
				printf("\nBan da chon sai chuc nang, can nhap lai\n");
				break;
	   		}
		}
	}while (1);

	return 0;
}



