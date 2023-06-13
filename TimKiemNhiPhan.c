/* 
    Cho mảng gồm các phần tử { 2, 3, 4, 10, 40 } nhập vào từ bàn phím. 
    Viết chương trình tìm kiếm giá trị 10.
    Sử dụng cài đặt tìm kiếm nhị phân để tìm kiếm.
*/
#include <stdio.h>
const int MAX_SIZE = 100;

int nhap(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu [%d]: ", i);
        scanf("%d", &a[i]);
    }
    return 0;
}

int xuat(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%5d", a[i]);
    }
    printf("\n");
    return 0;
}

int binary_search(int a[], int n, int x) {
    int l = 0;
    int r = n - 1;
    int mid;

    while (l <= r) {
        mid = (l + r) / 2;

        if (a[mid] < x) {
            l = mid + 1;
        } else if (a[mid] > x) {
            r = mid - 1;
        } else {
            return mid;
        }
    }

    return -1;
}

int main() {
    int n, x;
    int a[MAX_SIZE];
    printf("Nhap n: ");
    scanf("%d", &n);
    nhap(a, n);
    printf("Mang vua nhap la: ");
    xuat(a, n);
    printf("Nhap gia tri can tim: ");
    scanf("%d", &x);
    int result = binary_search(a, n, x);
    if (result == -1) {
        printf("Khong tim thay %d trong mang\n", x);
    } else {
        printf("%d co trong mang tai vi tri %d\n", x, result);
    }
    return 0;
}


