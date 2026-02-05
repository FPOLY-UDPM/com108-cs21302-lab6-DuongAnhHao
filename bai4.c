/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44305]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n, m;
    int a[100][100];
    int i, j;

    // Nhập số hàng và số cột
    printf("Nhap so hang n: ");
    scanf("%d", &n);

    printf("Nhap so cot m: ");
    scanf("%d", &m);

    // Nhập ma trận
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("Nhap a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }

    // Xuất ma trận bình phương
    printf("Ma tran binh phuong:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", a[i][j] * a[i][j]);
        }
        printf("\n");
    }

    return 0;
}