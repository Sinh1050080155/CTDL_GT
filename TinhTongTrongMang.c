/*
Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tính tổng các giá trị có trong mảng.
*/
#include<stdio.h>
int Tinh_tong(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }else{
        int tinh = Tinh_tong(a,n-1);
        return tinh + a[n-1];
    }
}
int main(){
    int a[5] = {1,2,3,4,5};
    printf("%d",Tinh_tong(a,5));
}