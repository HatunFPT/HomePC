#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct phanso{
	int tuSo;
	int mauSo;
};

int ucln(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return ucln(b, a % b);
    }
}
phanso rutgon(phanso ps1){
	phanso ps;
	int uc=ucln(ps1.tuSo,ps1.mauSo);
	ps.tuSo=ps1.tuSo/uc;
	ps.mauSo=ps1.mauSo/uc;
	return ps;
}
phanso tong(phanso ps1,phanso ps2){
	phanso ps;
	ps.tuSo=ps1.tuSo*ps2.mauSo+ps1.mauSo*ps2.tuSo;
	ps.mauSo=ps1.mauSo*ps2.mauSo;
	ps=rutgon(ps);
	return ps;
}
phanso hieu(phanso ps1,phanso ps2){
	phanso ps;
	ps.tuSo=ps1.tuSo*ps2.mauSo-ps1.mauSo*ps2.tuSo;
	ps.mauSo=ps1.mauSo*ps2.mauSo;
	ps=rutgon(ps);
	return ps;
}
phanso tich(phanso ps1,phanso ps2){
	phanso ps;
	ps.tuSo=ps1.tuSo*ps2.tuSo;
	ps.mauSo=ps1.mauSo*ps2.mauSo;
	ps=rutgon(ps);
	return ps;
}
phanso thuong(phanso ps1,phanso ps2){
	phanso ps;
	ps.tuSo=ps1.tuSo*ps2.mauSo;
	ps.mauSo=ps1.mauSo*ps2.tuSo;
	ps=rutgon(ps);
	return ps;
}
void xuatps(phanso ps){
	printf("%d/%d",ps.tuSo,ps.mauSo);
}
int main (){
	//khaibaoo
	phanso ps1,ps2;
	//nhap
	printf("Nhap tu so ps1: ");
	scanf("%d",&ps1.tuSo);
	do{
		printf("Nhap mau so ps1: ");
		scanf("%d",&ps1.mauSo);
		if(ps1.mauSo==0){
			printf("Mau so phai khac 0. Nhap lai!\n");
		}
	} while (ps1.mauSo==0);
	//
	printf("Nhap tu so ps2: ");
	scanf("%d",&ps2.tuSo);
	do{
		printf("Nhap mau so ps2: ");
		scanf("%d",&ps2.mauSo);
		if(ps2.mauSo==0){
			printf("Mau so phai khac 0. Nhap lai!\n");
		}
	} while (ps2.mauSo==0);
	
	phanso to,hi,ti,th;
	//tong
	to=tong(ps1,ps2);
	printf("\nTong 2 phan so la ");
	xuatps(to);
	//hieu
	hi=hieu(ps1,ps2);
	printf("\nHieu 2 phan so la ");
	xuatps(hi);
	//tich
	ti=tich(ps1,ps2);
	printf("\nTich 2 phan so la ");
	xuatps(ti);
	//thuong
	th=thuong(ps1,ps2);
	printf("\nThuong 2 phan so la ");
	xuatps(th);
	return 0;
}

