/*  
    Cho mảng 1 chiều các số nguyên. Viết hàm đệ quy xuất mảng.
*/
#include<stdio.h>
int xuatmang(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }
    else{
        xuatmang(a,n-1);
        printf("%5d",a[n-1]);
    }
}
int main()
{
    int a[5]={6, 3, 89, 10, 55};
    xuatmang(a,5);
}