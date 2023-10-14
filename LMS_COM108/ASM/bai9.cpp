#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int nhapTrongKhoang(int n,int m){
	int num;
	do{
		printf("\nMoi nhap so may man: ");
		scanf("%d",&num);
		if(num<n || num >m){
			printf("Loi roi. So phai nam trong khoang tu %d - %d. Nhap lai!\n",n,m);
		}
	} while(num<n || num >m);
	return num;
}
void randLucky(int a[],int n){
	srand(time(NULL));	
	for(int i=0;i<n;i++){
		a[i]=rand() % 14 +1;
	}
	printf("\n%d so may man la: ",n);
	for(int i=0;i<n;i++){
		printf("%5d",a[i]);
	}
}
int checkLucky(int a[],int n,int num1,int num2){
	int check=0;
	for(int i=0;i<n;i++){
		if(num1==a[i] || num2==a[i]){
			check=1;
		}
	}
	return check;
}
int main (){
		int number1,number2;
		number1=nhapTrongKhoang(1,15);
		number2=nhapTrongKhoang(1,15);
		printf("\tHe thong ghi nhan 2 so cua ban la: %d \t %d\n",number1,number2);
		int lucky[5];
		randLucky(lucky,5);
		int check=checkLucky(lucky,5,number1,number2);
		if(check==0){
			printf("\n\n\tChuc ban may man lan sau.");
		} else{
			printf("\n\n\tChuc mung! Ban da trung giai.");
		}
	return 0;
}

