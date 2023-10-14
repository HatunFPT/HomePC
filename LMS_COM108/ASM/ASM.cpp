#include <stdio.h>
#include <math.h>

int main()
{
    // Khai bao
    int chonCN;
    // In cac chuc nang
    printf("----------MENU----------");
    printf("\n1. Kiem tra so nguyen");
    printf("\n2. Tim UCLN, BCNN cua 2 so");
    printf("\n3. Tinh tien Karaoke");
    printf("\n4. Tinh tien dien");
    printf("\n5. Doi tien");
    printf("\n6. Vay tra gop");
    printf("\n7. Vay tien mua xe");
    printf("\n8. Sap xep thong tin sinh vien");
    printf("\n9. Gane FPOLY-LOTT");
    printf("\n10. Tinh toan phan so");
    printf("\n------------------------");
    // nhap chuc nang
    printf("\nMoi ban nhap chuc nang can dung: ");
    scanf("%d", &chonCN);
    switch (chonCN)
    {
    // Chuc nang 1
    case 1:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 1: \n\tKiem tra so nguyen");
        //Khai bao
        int n;
        int dem;
        //Nhapxuat
        printf("\nNhap vao 1 so nguyen: ");
        scanf("%d", &n);
        // check so nguyen
        if (n == (int)n)
            printf("\n%d la so nguyen.", n);
        else
            printf("\n%d khong la so nguyen", n);
        // check so nguyen to
        int check=1;
		if(n<1){
			printf("\n%d khong phai la so nguyen to.",n);
		}
		else {
			for(int i=2; i<n; i++){
				if(n% i == 0){
					check=0;
					break;
				}
			}
			if(check == 1){
				printf("\n%d la so nguyen to.",n);
			} 
			else
				printf("\n%d khong phai la so nguyen to.",n);
		}
        // check so chinh phuong
        
            if (sqrt(n) == (int)sqrt(n))
                printf("\n%d la chinh phuong.", n);
            else
                printf("\n%d khong la chinh phuong.", n);
        

        break;
    }
    // Chuc nang 2
    case 2:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 2: \n\tTim UCLN, BCNN");
        // Khai bao bien
        int x, y, a, b;
        // Nhap bien tu ban phim
        printf("\nNhap so nguyen thu nhat:");
        scanf("%d", &x);
        printf("Nhap so nguyen thu hai:");
        scanf("%d", &y);
        a = x;
        b = y;
        // Uoc chung lon nhat
        if (x == 0 || y == 0)
            printf("\nUCLN cua %d va %d la : %d", x, y, x + y);
        if (x == y)
            printf("\nUCLN cua %d va %d la : %d", x, y, y);
        if (x != y)
        {
            while (x != y)
            {
                if (x > y)
                    x = x - y;
                else
                    y = y - x;
            }
            printf("\nUCLN la : %d", y);
        }
        // Boi chung nho nhat
        int dem, bcnn;
        if (a > b)
            dem = a;
        else
            dem = b;
        for (int i = dem; i <= a * b; i += dem)
        {
            if (i % a == 0 && i % b == 0)
            {
                bcnn = i;
                break;
            }
        }
        printf("\nBCNN la : %d", bcnn);
        break;
    }
    // Chuc nang 3
    case 3:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 3: \n\tTinh tien karaoke");
        int hourStart, minuteStart, hourEnd, minuteEnd;
        // check gio bat dau
        do
        {
            printf("\nMoi nhap thoi gian bat dau: \nNhap gio: ");
            scanf("%d", &hourStart);
            if (hourStart < 12 || hourStart > 23)
            {
                printf("\nGio bat dau phai tu 12h tro di. Moi nhap lai.\n");
            }

        } while (hourStart < 12 || hourStart > 22);
        // check nhap phut
        do
        {
            printf("Nhap phut: ");
            scanf("%d", &minuteStart);
            if (minuteStart < 0 || minuteStart > 60)
            {
                printf("\nPhut bat dau phai tu 0 - 60. Moi nhap lai.\n");
            }
        } while (minuteStart < 0 || minuteStart > 60);
        // in thoi gina bat dau:
        printf("\nHe thong ghi nhan thoi gian bat dau la: %d Gio %d Phut", hourStart, minuteStart);
        // check gio ket thuc
        do
        {
            printf("\nMoi nhap thoi gian ket thuc: \nNhap gio: ");
            scanf("%d", &hourEnd);
            if (hourEnd < hourStart || hourEnd > 23)
            {
                printf("\nGio bat dau phai tu 12h tro di. Moi nhap lai.\n");
            }
        } while (hourEnd < hourStart || hourEnd > 23);
        // Check phut ket thuc
        do
        {
            printf("Nhap phut: ");
            scanf("%d", &minuteEnd);
            if (minuteEnd < 0 || minuteEnd > 60)
            {
                printf("\nPhut bat dau phai tu 0 - 60. Moi nhap lai.\n");
            }
        } while (minuteEnd < 0 || minuteEnd > 60);

        if (hourEnd == 23)
            minuteEnd = 0;
        if (hourStart == hourEnd)
        {
            if (minuteEnd <= minuteStart)
            {
                printf("\nPhut ket thuc phai lon hon phut bat dau");
                printf("\nMoi nhap lai: ");
                do
                {
                    printf("Nhap phut: ");
                    scanf("%d", &minuteEnd);
                    if (minuteEnd <= minuteStart || minuteEnd > 60)
                    {
                        printf("\nPhut ket thuc phai lon hon phut bat dau. \nMoi nhap lai: ");
                    }
                } while (minuteEnd <= minuteStart || minuteEnd > 60);
                
            }
        }
        // in thoi gian ket thuc:
        printf("\nHe thong ghi nhan thoi gian ket thuc la: %d Gio %d Phut", hourEnd, minuteEnd);

        // quy doi thoi gian
        float timeStart, timeEnd, timeUse;
        float moneyPay;
        float x = minuteEnd;
        timeStart = (float)hourStart + (float)minuteStart / 60;
        timeEnd = (float)hourEnd + (float)minuteEnd / 60;

        // tinh tien 50k 1h
        timeUse = timeEnd - timeStart;
        if (timeUse <= 3)
        {
            moneyPay = timeUse * 50000;
        }
        else
        {
            moneyPay = 150000 + (timeUse - 3) * 50000 * 0.7;
        }
        
        if (hourStart >= 14 && hourStart <= 16)
        {
            moneyPay = moneyPay * 0.9;
        }
        // thanh toan
        printf("\n\tSo tien can thanh toan la: %.0f", moneyPay);
        break;
    }
    // Chuc nang 4
    case 4:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 4: \n\tTinh tien dien");
        // khai bao
        int kWhUse;
        int moneyPay;
        do
        {
            printf("\nMoi ban nhap so kWh: ");
            scanf("%d", &kWhUse);
            if (kWhUse < 0)
            {
                printf("So kWh phai lon hon 0. Moi nhap lai!");
            }
        } while (kWhUse < 0);

        if (kWhUse <= 50)
        {
            moneyPay = kWhUse * 1678;
        }
        else if (kWhUse <= 100)
        {
            moneyPay = 50 * 1678 + (kWhUse - 50) * 1734;
        }
        else if (kWhUse <= 200)
        {
            moneyPay = 50 * (1678 + 1734) + (kWhUse - 100) * 2014;
        }
        else if (kWhUse <= 300)
        {
            moneyPay = 50 * (1678 + 1734 + 2014) + (kWhUse - 200) * 2536;
        }
        else if (kWhUse <= 400)
        {
            moneyPay = 50 * (1678 + 1734 + 2014 + 2536) + (kWhUse - 300) * 2834;
        }
        else
        {
            moneyPay = 50 * (1678 + 1734 + 2014 + 2536 + 2834) + (kWhUse - 400) * 2927;
        }
        // thanh toan
        printf("\n\tSo tien dien ban can phai tra cho %d so kWh la %d", kWhUse, moneyPay);
        break;
    }
    // Chuc nang 5
    case 5:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 5: \n\tDoi tien");
        // khai bao
        int moneyTrade;
        float valueMemory;
        // nhap xuat
        do
        {
            printf("\nMoi ban nhap so tien can doi: ");
            scanf("%d", &moneyTrade);
            if (moneyTrade < 0)
            {
                printf("Loi. So tien phai lon hon 0. ");
            }
        } while (moneyTrade < 0);
        // cac menh gia 200k 100k 50k 20k 10k
        printf("\nKet qua:");
        if (moneyTrade % 200000 == 0)
        {
            printf("\n\t%d to 200.000VND", moneyTrade / 200000);
        }
        else
        {
            valueMemory = (float)moneyTrade / 200000;
            printf("\n\t%d to 200.000VND", (int)valueMemory);
            moneyTrade = moneyTrade - 200000 * (int)valueMemory;
            if (moneyTrade % 100000 == 0)
            {
                printf("\n\t%d to 100.000VND", moneyTrade / 100000);
            }
            else
            {
                valueMemory = (float)moneyTrade / 100000;
                printf("\n\t%d to 100.000VND", (int)valueMemory);
                moneyTrade = moneyTrade - 100000 * (int)valueMemory;
                if (moneyTrade % 50000 == 0)
                {
                    printf("\n\t%d to 50.000VND", moneyTrade / 50000);
                }
                else
                {
                    valueMemory = (float)moneyTrade / 50000;
                    printf("\n\t%d to 50.000VND", (int)valueMemory);
                    moneyTrade = moneyTrade - 50000 * (int)valueMemory;
                    if (moneyTrade % 20000 == 0)
                    {
                        printf("\n\t%d to 20.000VND", moneyTrade / 20000);
                    }
                    else
                    {
                        valueMemory = (float)moneyTrade / 20000;
                        printf("\n\t%d to 20.000VND", (int)valueMemory);
                        moneyTrade = moneyTrade - 20000 * (int)valueMemory;
                        if (moneyTrade % 10000 == 0)
                        {
                            printf("\n\t%d to 10.000VND", moneyTrade / 10000);
                        }
                        else
                        {
                            valueMemory = (float)moneyTrade / 10000;
                            printf("\n\t%d to 10.000VND", (int)valueMemory);
                            moneyTrade = moneyTrade - 10000 * (int)valueMemory;
                            if (moneyTrade % 5000 == 0)
                            {
                                printf("\n\t%d to 5.000VND", moneyTrade / 5000);
                            }
                            else
                            {
                                valueMemory = (float)moneyTrade / 5000;
                                printf("\n\t%d to 5.000VND", (int)valueMemory);
                                moneyTrade = moneyTrade - 5000 * (int)valueMemory;
                                if (moneyTrade % 2000 == 0)
                                {
                                    printf("\n\t%d to 2.000VND", moneyTrade / 2000);
                                }
                                else
                                {
                                    valueMemory = (float)moneyTrade / 2000;
                                    printf("\n\t%d to 2.000VND", (int)valueMemory);
                                    moneyTrade = moneyTrade - 2000 * (int)valueMemory;
                                    if (moneyTrade % 1000 == 0)
                                    {
                                        printf("\n\t%d to 1.000VND", moneyTrade / 1000);
                                    }
                                    else
                                    {
                                        printf("\n\t%d to 1.000VND", (int)(moneyTrade / 1000));
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }

        break;
    }
    // Chuc nang 6
    case 6:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 6: \n\tVay tra gop");
        //khai bao
        float RATE=5/100;
        float loan;
        //nhap xuat
        printf("Moi ban nhap so tien can vay : ");
        scanf("%d",&loan);
        //run
        float tienlai;
        for(int i=1;i<=12;i++){
        	printf("\nThang %d so tien ban can phai thanh toan la: %d");
        	tienlai=
		}
        
        break;
    }
    // Chuc nang 7
    case 7:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 7: \n\tVay tien mua xe");
        break;
    }
    // Chuc nang 8
    case 8:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 8: \n\tSap xep thong tin sinh vien");
        break;
    }
    // Chuc nang 9
    case 9:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 9: \n\tGame FPOLY-LOTT");
        break;
    }
    // Chuc nang 10
    case 10:
    {
        printf("\nChuc mung ban da chon thanh cong chuc nang so 10: \n\tTinh toan phan so");
        break;
    }
    //
    default:
    {
        printf("\nKhong co chuc nang  nay.");
        break;
    }
    }
}
