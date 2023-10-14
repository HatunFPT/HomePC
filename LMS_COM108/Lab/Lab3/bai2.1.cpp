//Lap 3 - Bai 2.2
#include <stdio.h>
#include <math.h>

int main(){
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
	return 0;
}

