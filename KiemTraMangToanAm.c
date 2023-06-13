/*
    Cho mảng 1 chiều các số thực. 
    Hãy viết hàm đệ quy kiểm tra mảng có thỏa mảng tính chất “toàn giá trị âm”
*/
#include <stdio.h>
int kttoanam(int a[], int n)
{
    if(n == 0)
    {
        return 1; 
    }
    else
    {
        int toanam = kttoanam(a, n-1); 
        if(toanam == 1 && a[n-1] < 0) 
        {
            return 1; 
        }
        else
        {
            return 0; 
        }
    }
}

int main()
{
    int a[5] = {-5,-1,2,-3,-5};
    int kq = kttoanam(a,5);
    if(kq == 1)
    {
        printf("Toan am");
    }
    else
    {
        printf("Khong toan am");
    }
    return 0;
}
