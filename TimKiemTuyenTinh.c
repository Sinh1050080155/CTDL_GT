// Cho mảng gồm các phần tử { 2, 3, 4, 10, 40 } nhập vào từ bàn phím.
//  Viết chương trình tìm kiếm giá trị 10. 
// Sử dụng cài đặt tìm kiếm tuyến tính để tìm kiếm.
#include<stdio.h>
const int MAX_SIZE = 100;
int nhap(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan tu thu [%d]",i);
        scanf("%d", &a[i]);
    }
    return 0;
}
int xuat(int a[], int n)
{
    for (int  i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
    printf("\n");
    return 0;
}
int linear_search(int a[], int x, int n)
{
    for(int i = 0; i < n; i++)
    {
        if(a[i] == x){
            return i;
        } 
    }
    return -1;
}
int main()
{
    int n, x;
    int a[MAX_SIZE];
    printf("Nhap n:");  
    scanf("%d",&n);
    nhap(a,n);
    xuat(a,n);
    printf("\nNhap gia tri can tim: ");
    scanf("%d", &x);
    int result = linear_search(a, x, n);
    if (result == -1) {
        printf("Khong tim thay %d trong mang\n", x);
    } else {
        printf("%d co trong mang tai vi tri %d\n", x, result);
    }
    return 0;
}

    
