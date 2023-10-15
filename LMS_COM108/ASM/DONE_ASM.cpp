#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
// function chuc nang 1
int checkSoNguyen(float n)
{
    if (n == (int)n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int checkSoNguyenTo(int n)
{
    if (n < 1)
    {
        return 0;
    }
    else
    {
        int check = 1;
        for (int i = 2; i < n; i++)
        {
            if ((int)n % i == 0)
            {
                check = 0;
                break;
            }
        }
        return check;
    }
}
//
int ucln(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return ucln(b, a % b);
    }
}
int karaoke(int hourStart, int minuteStart, int hourEnd, int minuteEnd)
{
    // quy doi thoi gian
    float timeStart, timeEnd, timeUse;
    float moneyPay;
    float x = minuteEnd;
    timeStart = (float)hourStart + (float)minuteStart / 60;
    timeEnd = (float)hourEnd + (float)minuteEnd / 60;
    printf("\n\nHe thong ghi nhan thoi gian bat dau la: %d Gio %d Phut", hourStart, minuteStart);
    printf("\nHe thong ghi nhan thoi gian ket thuc la: %d Gio %d Phut", hourEnd, minuteEnd);
    printf("\nBan da su dung dich vu %.2f gio", timeEnd - timeStart);
    printf("\nGia dich vu la 50k/h");
    // tinh tien 50k 1h
    timeUse = timeEnd - timeStart;
    if (timeUse <= 3)
    {
        moneyPay = timeUse * 50000;
    }
    else
    {
        printf("\nAp dung voucher giam 30%.");
        moneyPay = 150000 + (timeUse - 3) * 50000 * 0.7;
    }
    if (hourStart >= 14 && hourStart <= 16)
    {
        printf("\nAp dung voucher giam 10%.");
        moneyPay = moneyPay * 0.9;
    }
    return moneyPay;
}
//
int tiendien(int kWhUse)
{
    int moneyPay = 0;
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
    return moneyPay;
}
//
int soToTien(int sotien, int menhgia)
{
    return sotien / menhgia;
}
//
//
struct sv
{
    char hoTen[50];
    float diem;
    char hocLuc[50];
};
// void nhap
void nhap(sv sinhVien[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Thong tin sinh vien thu %d :\n", i + 1);
        printf("Ho va ten: ");
        gets(sinhVien[i].hoTen);
        printf("Diem: ");
        scanf("%f", &sinhVien[i].diem);
        fflush(stdin);
        if (sinhVien[i].diem < 5)
        {
            strcpy(sinhVien[i].hocLuc, "Yeu");
        }
        else if (sinhVien[i].diem <= 6.5)
        {
            strcpy(sinhVien[i].hocLuc, "Trung binh");
        }
        else if (sinhVien[i].diem <= 8)
        {
            strcpy(sinhVien[i].hocLuc, "Kha");
        }
        else if (sinhVien[i].diem <= 9)
        {
            strcpy(sinhVien[i].hocLuc, "Gioi");
        }
        else
        {
            strcpy(sinhVien[i].hocLuc, "Xuat sac");
        }
    }
}

// void xuat
void xuat(sv sinhVien[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("Thong tin sinh vien thu %d:\n", i + 1);
        printf("\tHo ten: ");
        puts(sinhVien[i].hoTen);
        printf("\tDiem: %.2f\n", sinhVien[i].diem);
        printf("\tXep loai hoc luc: ");
        puts(sinhVien[i].hocLuc);
    }
}
//
int nhapTrongKhoang(int n, int m)
{
    int num;
    do
    {
        printf("\nMoi nhap so may man trong khoang %d - %d:", n, m);
        scanf("%d", &num);
        if (num < n || num > m)
        {
            printf("Loi roi. So phai nam trong khoang tu %d - %d. Nhap lai!\n", n, m);
        }
    } while (num < n || num > m);
    return num;
}
void randLucky(int a[], int n)
{
    srand(time(NULL));
    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 14 + 1;
    }
    printf("\n%d so may man la: ", n);
    for (int i = 0; i < n; i++)
    {
        printf("%5d", a[i]);
    }
}
int checkLucky(int a[], int n, int num1, int num2)
{
    int check = 0;
    for (int i = 0; i < n; i++)
    {
        if (num1 == a[i] || num2 == a[i])
        {
            check = 1;
        }
    }
    return check;
}
//
struct phanso
{
    int tuSo;
    int mauSo;
};

phanso rutgon(phanso ps1)
{
    phanso ps;
    int uc = ucln(ps1.tuSo, ps1.mauSo);
    ps.tuSo = ps1.tuSo / uc;
    ps.mauSo = ps1.mauSo / uc;
    return ps;
}
phanso tong(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tuSo = ps1.tuSo * ps2.mauSo + ps1.mauSo * ps2.tuSo;
    ps.mauSo = ps1.mauSo * ps2.mauSo;
    ps = rutgon(ps);
    return ps;
}
phanso hieu(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tuSo = ps1.tuSo * ps2.mauSo - ps1.mauSo * ps2.tuSo;
    ps.mauSo = ps1.mauSo * ps2.mauSo;
    ps = rutgon(ps);
    return ps;
}
phanso tich(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tuSo = ps1.tuSo * ps2.tuSo;
    ps.mauSo = ps1.mauSo * ps2.mauSo;
    ps = rutgon(ps);
    return ps;
}
phanso thuong(phanso ps1, phanso ps2)
{
    phanso ps;
    ps.tuSo = ps1.tuSo * ps2.mauSo;
    ps.mauSo = ps1.mauSo * ps2.tuSo;
    ps = rutgon(ps);
    return ps;
}
void xuatps(phanso ps)
{
    printf("%d/%d", ps.tuSo, ps.mauSo);
}
int main()
{
    // Khai bao
    int chonCN;
    // Menu
    do
    {
        // Khai bao
        int chonCN;
        // In cac chuc nang
        printf("\n----------MENU----------");
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
        printf("\n0. Thoat");
        printf("\n------------------------");
        // nhap chuc nang
        printf("\nMoi ban nhap chuc nang can dung: ");
        scanf("%d", &chonCN);
        fflush(stdin);
        // run
        switch (chonCN)
        {
	        case 1:
	        {
	            printf("\nChuc mung ban da chon thanh cong chuc nang so 1: \n\tKiem tra so nguyen");
	            // Khai bao
	            float n;
	            int dem;
	            // Nhapxuat
	            do
	            {
	                printf("\nNhap vao 1 so nguyen: ");
	                scanf("%f", &n);
	                if (n != (int)n)
	                {
	                    printf("Loi roi. Moi nhap so nguyen.");
	                }
	            } while (n != (int)n);
	            printf("\nBan vua nhap so nguyen %.0f", n);
	            // check so nguyen to
	            if (checkSoNguyenTo((int)n) == 1)
	            {
	                printf("\n%.0f la so nguyen to.", n);
	            }
	            else
	                printf("\n%.0f khong phai la so nguyen to.", n);
	            // check so chinh phuong
	            if (checkSoNguyen(sqrt(n)) == 1)
	                printf("\n%.0f la chinh phuong.", n);
	            else
	                printf("\n%.0f khong la chinh phuong.", n);
	            break;
	        }
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
	            // Uoc chung lon nhat
	            if (x == 0 || y == 0)
	                printf("\nUCLN cua %d va %d la : %d", x, y, x + y);
	            if (x == y)
	                printf("\nUCLN cua %d va %d la : %d", x, y, y);
	            if (x != y)
	            {
	                printf("\nUCLN cua %d va %d la : %d", x, y, ucln(x, y));
	            }
	            // Boi chung nho nhat
	            int dem, bcnn;
	            if (x > y)
	                dem = x;
	            else
	                dem = y;
	            for (int i = dem; i <= x * y; i += dem)
	            {
	                if (i % x == 0 && i % y == 0)
	                {
	                    bcnn = i;
	                    break;
	                }
	            }
	            printf("\nBCNN la : %d", bcnn);
	            break;
	        }
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
	            printf("\nSo tien can thanh toan la: %d", karaoke(hourStart, minuteStart, hourEnd, minuteEnd));
	            break;
	        }
	        case 4:
	        {
	            printf("\nChuc mung ban da chon thanh cong chuc nang so 4: \n\tTinh tien dien");
	            // khai bao
	            int kWhUse;
	            // int moneyPay;
	            do
	            {
	                printf("\nMoi ban nhap so kWh: ");
	                scanf("%d", &kWhUse);
	                if (kWhUse < 0)
	                {
	                    printf("So kWh phai lon hon 0. Moi nhap lai!");
	                }
	            } while (kWhUse < 0);
	            // thanh toan
	            printf("\n\tSo tien dien ban can phai tra cho %d so kWh la %d", kWhUse, tiendien(kWhUse));
	            break;
	        }
	        case 5:
	        {
	            printf("Chuc mung ban da chon than cong chuc nang so 5.");
	            int menhGia[9] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
	            int soTien;
	            printf("\nMoi ban nhap so tien: ");
	            scanf("%d", &soTien);
	            printf("Bat dau thuc hien doi tien: \n");
	            for (int i = 0; i < 9; i++)
	            {
	                printf(" %d to %d dong\n", soToTien(soTien, menhGia[i]), menhGia[i]);
	                soTien = soTien - soToTien(soTien, menhGia[i]) * menhGia[i];
	            }
	            break;
	        }
	        case 6:
	        {
	            printf("Chuc mung ban da chon than cong chuc nang so 6.");
	            float tienvay;
	            float RATE = 0.05;
	            float tienlai = 0;
	            float tienphaithanhtoan = 0;
	            // nhap
	            printf("Nhap so tien muon vay: ");
	            scanf("%f", &tienvay);
	            float tiengocphaithanhtoan = tienvay / 12;
	            // in
	            for (int i = 1; i <= 12; i++)
	            {
	                printf("\n\tThang thu %d:", i);
	                tienlai = tienvay * RATE;
	                printf("\nTien lai phai tra = %.0f", tienlai);
	                printf("\nTien goc phai tra = %.0f", tiengocphaithanhtoan);
	                tienphaithanhtoan = tiengocphaithanhtoan + tienlai;
	                printf("\nTien phai tra thang thu %d = %.0f", i, tienphaithanhtoan);
	                tienvay = tienvay - tiengocphaithanhtoan;
	            }
	            break;
	        }
	        case 7:
	        {
	            printf("Chuc mung ban da chon than cong chuc nang so 7.\n");
	            printf("Nhap so phan tram vay: ");
	            int phantramvay;
	            scanf("%d", &phantramvay);
	            float tienvay = 5000000 * (phantramvay);
	            // float tienvay;
	            float RATE = 0.072;
	            float tienlai = 0;
	            float tienphaithanhtoan = 0;
	            float tiengocphaithanhtoan = tienvay / 24;
	            // in
	            for (int i = 1; i <= 24; i++)
	            {
	                printf("\n\tThang thu %d:", i);
	                tienlai = tienvay * RATE;
	                printf("\nTien lai phai tra = %.0f", tienlai);
	                printf("\nTien goc phai tra = %.0f", tiengocphaithanhtoan);
	                tienphaithanhtoan = tiengocphaithanhtoan + tienlai;
	                printf("\nTien phai tra nam thu %d = %.0f", i, tienphaithanhtoan);
	                tienvay = tienvay - tiengocphaithanhtoan;
	            }
	
	            break;
	        }
	        case 8:
	        {
	            printf("Chuc mung ban da chon than cong chuc nang so 8.\n");
	            int size;
	            printf("Moi nhap so sinh vien: ");
	            scanf("%d", &size);
	            fflush(stdin);
	            sv sinhVien[size];
	            printf("Moi nhap thong tin danh sach sinh vien: \n");
	            nhap(sinhVien, size);
	            sv steb;
	            for (int i = 0; i < size; i++)
	            {
	                for (int j = 0; j < size; j++)
	                {
	                    if (sinhVien[i].diem > sinhVien[j].diem)
	                    {
	                        steb = sinhVien[i];
	                        sinhVien[i] = sinhVien[j];
	                        sinhVien[j] = steb;
	                    }
	                }
	            }
	            printf("Danh sach sinh vien:\n");
	            xuat(sinhVien, size);
	            break;
	        }
	        case 9:
	        {
	            printf("Chuc mung ban da chon than cong chuc nang so 9.\n");
	            int number1, number2;
	            number1 = nhapTrongKhoang(1, 15);
	            number2 = nhapTrongKhoang(1, 15);
	            printf("\tHe thong ghi nhan 2 so cua ban la: %d \t %d\n", number1, number2);
	            int lucky[5];
	            randLucky(lucky, 5);
	            int check = checkLucky(lucky, 5, number1, number2);
	            if (check == 0)
	            {
	                printf("\n\n\tChuc ban may man lan sau.");
	            }
	            else
	            {
	                printf("\n\n\tChuc mung! Ban da trung giai.");
	            }
	            break;
	        }
	        case 10:
	        {
	            printf("Chuc mung ban da chon than cong chuc nang so 10.\n");
	            // khaibaoo
	            phanso ps1, ps2;
	            // nhap
	            printf("Nhap tu so ps1: ");
	            scanf("%d", &ps1.tuSo);
	            do
	            {
	                printf("Nhap mau so ps1: ");
	                scanf("%d", &ps1.mauSo);
	                if (ps1.mauSo == 0)
	                {
	                    printf("Mau so phai khac 0. Nhap lai!\n");
	                }
	            } while (ps1.mauSo == 0);
	            //
	            printf("Nhap tu so ps2: ");
	            scanf("%d", &ps2.tuSo);
	            do
	            {
	                printf("Nhap mau so ps2: ");
	                scanf("%d", &ps2.mauSo);
	                if (ps2.mauSo == 0)
	                {
	                    printf("Mau so phai khac 0. Nhap lai!\n");
	                }
	            } while (ps2.mauSo == 0);
	
	            phanso to, hi, ti, th;
	            // tong
	            to = tong(ps1, ps2);
	            printf("\nTong 2 phan so la ");
	            xuatps(to);
	            // hieu
	            hi = hieu(ps1, ps2);
	            printf("\nHieu 2 phan so la ");
	            xuatps(hi);
	            // tich
	            ti = tich(ps1, ps2);
	            printf("\nTich 2 phan so la ");
	            xuatps(ti);
	            // thuong
	            th = thuong(ps1, ps2);
	            printf("\nThuong 2 phan so la ");
	            xuatps(th);
	            break;
	        }
	        case 0:
	        {
	            printf("0. Thoat");
	            exit(0);
	            break;
	        }
	        default:
	        {
	            printf("\nBan da chon sai chuc nang, can nhap lai\n");
	            break;
	        }
        }
    } while (1);
    return 0;
}

