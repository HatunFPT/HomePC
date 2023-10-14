#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main (){
//	int number1,number2;
//	do{
//		printf("Moi nhap so thu nhat: ");
//		scanf("%d",&number1);
//		if(number1<1 || number1 >15){
//			printf("Loi roi. So phai nam trong khoang tu 1-15. Nhap lai!");
//		}
//	} while(number1<1 || number1 >15);
//	do{
//		printf("Moi nhap so thu hai: ");
//		scanf("%d",&number2);
//		if(number2<1 || number2 >15){
//			printf("Loi roi. So phai nam trong khoang tu 1-15. Nhap lai!");
//		}
//	} while(number2<1 || number2 >15);
	
	int arr[15],lucky[5];
	for(int i=1;i<16;i++){
		arr[i]=i;
	}
	srand(time(NULL));	
	for(int i=0;i<5;i++){
		int select= 1+ rand()%(15-i);
		lucky[i]=arr[i];
		arr[i]=arr[14-i];
	}
	for (int i = 0; i < 5; i++) {
        printf("%02d ", lucky[i]);
    }
	
	return 0;
}

