/******************************************************************************
 * Họ và tên: [Dương Anh Hào]
 * MSSV:      [PS44305]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 3: SẮP XẾP MẢNG THEO THỨ TỪ GIẢM DẦN 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả mảng đã sắp xếp 

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;
    int arr[100];
    int i, j, temp;

    // Nhập số phần tử
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    // Nhập mảng
    for (i = 0; i < n; i++) {
        printf("Nhap arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    // Sắp xếp mảng giảm dần
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] < arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Xuất mảng sau khi sắp xếp
    printf("Mang sau khi sap xep giam dan:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}