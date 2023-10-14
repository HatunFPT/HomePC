#include <stdio.h>

int main (){
	int n;
	int check=1;
	printf("Nhap n: ");
	scanf("%d",&n);
	if(n<2){
		printf("%d khong phai so nguyen to.",n);
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
			printf("%d khong la so nguyen to.",n);
		}
	}
	
	return 0;
}

