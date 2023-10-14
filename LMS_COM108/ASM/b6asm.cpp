#include <stdio.h>
#include <math.h>

int main(){
	//khai bao
    float tienvay;
    float RATE=0.05;
    float tienlai=0;
    float tienphaithanhtoan=0;
    //nhap
    printf("Nhap so tien muon vay: ");
    scanf("%f",&tienvay);
    float tiengocphaithanhtoan=tienvay/12;
    //in 
    for(int i=1;i<=12;i++){
        printf("\n\tThang thu %d:",i);
        tienlai= tienvay*RATE;
        printf("\nTien lai phai tra = %.0f",tienlai);
        printf("\nTien goc phai tra = %.0f",tiengocphaithanhtoan);
        tienphaithanhtoan=tiengocphaithanhtoan+tienlai;
        printf("\nTien phai tra thang thu %d = %.0f",i,tienphaithanhtoan);
        tienvay=tienvay-tiengocphaithanhtoan;
    }
    return 0;
}
