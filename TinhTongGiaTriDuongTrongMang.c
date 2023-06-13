/*
    Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị dương có trong mảng
*/
#include<stdio.h>
int tinhtong(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }else{
        int tong = tinhtong(a,n-1);
        if(a[n-1] > 0)
        {
            return tong + a[n-1];
        }else{
            return tong;
        }
    }
}
int main()
{
    int a[5] = {56, -9, 12, 9, -3};
    printf("Tong gia tri duong trong mang: %d",tinhtong(a,5));
}