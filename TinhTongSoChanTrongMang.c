/*
    Cho mảng 1 chiều các số nguyên. 
    Viết hàm tính tổng các số chẵn trong mảng bằng phương pháp đệ quy.
*/
#include<stdio.h>
int Tinh_tong_chan(int a[],int n)
{
    if(n == 0)
    {
        return 0;
    }else{
        int tinh = Tinh_tong_chan(a,n-1);
        if(a[n-1] % 2 == 0)
        {
            return tinh + a[n-1];
        }else{
            return tinh;
        }
    }
}
int main(){
    int a[5] = { 1, -5, 6, 8, -7};
    printf("%d",Tinh_tong_chan(a,5));
}