#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){
	int TIENVAY=500000000;
	float RATE=0.072;
	int tienvay;
	float phantramvaytoida;
	do{
		printf("\nMoi ban nhap % vay toi da: ");
		scanf("%f",&phantramvaytoida);
		if(phantramvaytoida < 0 || phantramvaytoida > 100){
			printf("\nMoi nhap lai! So phai tu 0 toi 100.");
		}	
	} while (phantramvaytoida < 0 || phantramvaytoida > 100);
	tienvay= TIENVAY*phantramvaytoida/100;
	printf("\n%d ",tienvay);
	return 0;
}

