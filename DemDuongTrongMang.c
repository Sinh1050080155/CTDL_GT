/*
    Cho mảng 1 chiều các số thực. 
    Viết hàm đếm số lượng giá trị dương trong mảng bằng phương pháp đệ quy.
*/
#include<stdio.h>
int demduong(float a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else{
        int tong = demduong(a, n-1);
        if(a[n-1] > 0)
        {
            return tong +1;
        }else{
            return tong;
        }
    }
}
int main()
{
    float a[5]={2, -3, 9, -8, -1};
    printf("So phan tu duong: %d",demduong(a,5));
}