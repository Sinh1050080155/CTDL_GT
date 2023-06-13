/*
    Cho mảng 1 chiều các số thực. Hãy viết hàm đệ quy tìm giá trị lớn nhất có trong mảng
*/
#include<stdio.h>
int giatriMax(int a[], int n)
{
    if(n == 0)
    {
        return 0;
    }else{
        int tim = giatriMax(a,n-1);
        if(a[n-1]> tim)
        {
            return a[n-1];
        }
    }

}
int main(){
    int a[5] = {1,2,3,6,9};
    printf("%d",giatriMax(a,5));
}