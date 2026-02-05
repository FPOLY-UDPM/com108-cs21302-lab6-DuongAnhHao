/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44305]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int i;
    int max, min;

    // Nhập số phần tử
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    // Nhập mảng
    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Gán ban đầu
    max = arr[0];
    min = arr[0];

    // Tìm max và min
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Xuất kết quả
    printf("Gia tri lon nhat: %d\n", max);
    printf("Gia tri nho nhat: %d", min);

    return 0;
}