/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44305]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int i;
    int tong = 0;
    int dem = 0;
    float trungBinh;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    // Nhập mảng
    for (i = 0; i < n; i++) {
        printf("Nhap phan tu arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Tính tổng và đếm các số chia hết cho 3
    for (i = 0; i < n; i++) {
        if (arr[i] % 3 == 0) {
            tong += arr[i];
            dem++;
        }
    }

    // Tính trung bình
    if (dem > 0) {
        trungBinh = (float)tong / dem;
        printf("Trung binh cac so chia het cho 3 la: %.2f", trungBinh);
    } else {
        printf("Khong co so nao chia het cho 3 trong mang");
    }

    return 0;
}