/*
    Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. 
    Viết chương trình để sắp xếp.
    Sử dụng phương pháp sắp xếp đổi chỗ trực tiếp để sắp xếp
*/
#include<stdio.h>
int dctt(int a[], int n)
{
    for(int i = 0; i < n - 1; i++)
    {
        for(int j = i + 1; j < n ; j++)
        {
            if(a[i]>a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }          
        }
    }
}
        
void xuat(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%5d",a[i]);
    }
    
}
int main()
{
    int a[5] = {2, 3, 1, 10, 40};
    dctt(a,5);
    xuat(a,5);
}