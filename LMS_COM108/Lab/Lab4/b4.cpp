#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	//Khai bao
	int chonCN;
	//in menu
	do{
		printf("\n----------MENU----------");
		printf("\n1. tinh tong binh tong");
		printf("\n2. tim so nguyen to");
		printf("\n3. tim so chinh phuong");
		printf("\n4. Thoat");
		printf("\n------------------------");
		printf("\nMoi nhap: ");
		scanf("%d", &chonCN);
		//run
		switch(chonCN) {
			case 1:{
				int max,min;
				printf("Nhap max: ");
				scanf("%d",&max);
				printf("Nhap min: ");
				scanf("%d",&min);
				
				int tong=0;
				int tinh=min;
				while (tinh<=max){
					if(tinh%2==0){
						tong+=tinh;
					}
					tinh++;
				}
				printf("Tong = %d",tong);
				break;
			}
			case 2:{
				int n;
				int check =1;
				printf("Nhap n: ");
				scanf("%d",&n);
				if(n<2){
					printf("%d khong phai so nguyen to.",n);
				}
				else if (n == 2){
					printf("%d  la so nguyen to.",n);
				}else{
					for(int i=2;i<n;i++){
						if(n%i==0){
							check=0;
							break;
						}
					}
					if(check==1){
						printf("%d la so nguyen to",n);
					}
					else {
						printf("%d  la so nguyen to.",n);
					}
				}
				break;
			}
			case 3:{
				int x;
				printf("Nhap x: ");
				scanf("%d",&x);
				if(sqrt(x)==(int)sqrt(x)){
					printf("day la so chinh phuong.");
				} else{
					printf("day khong la so chinh phuong.");
				}
				break;
			}
			case 4:{
				printf("Thoat!");
				exit(0);
				break;
			}
			default :{
				printf("\nChuong trinh khong co chuc nang nay. Moi nhap lai");
				break;
			}
		}
	} while(1);
	return 0;
}

