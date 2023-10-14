#include <stdio.h>
#include <math.h>

int main(){
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
	
	return 0;
}

