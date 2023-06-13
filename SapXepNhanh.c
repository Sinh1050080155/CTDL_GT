/*
    Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím.
    Viết chương trình để sắp xếp. 
    Sử dụng phương pháp sắp xếp nhanh để sắp xếp
 */
#include<stdio.h>
#include<conio.h>
const int max = 100;
int nhapmang(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("Nhap phan thu thu a[%d]",i);
        scanf("%d",&a[i]);
    }  
}
int xuatmang(int a[],int n)
{
    for(int i = 0; i<n; i++)
    {
        printf("%5d",a[i]);
    }
}
void quick_sort(int a[], int l, int r)
{
    int p = a[(l + r)/2];
    int i = l;
    int j = r;
    while (i <= j)
    {
        while (a[i]<p)
        {
            i++;
        }
        while (a[j]>p)
        {
            j--;
        }
        if(i <= j)
        {
            int temp = a[i];           
            a[i] = a[j];
            a[j] = temp;
            i++;
            j--;
        }  
    }
    if(i < r){
        quick_sort(a, i, r); 
    }
    if( l < j ){
        quick_sort(a, l, j);
    }  
}
int main(){
    int a[max],n,l,r;
    printf("Nhap so n: "); scanf("%d", &n);
    nhapmang(a, n);
    printf("Mang 1 chieu\n");
    xuatmang(a, n);
    printf("\n");
    printf("Nhap vi tri l: "); scanf("%d", &l);
    printf("Nhap vi tri r: "); scanf("%d", &r);
    quick_sort(a, l, r);
    printf("Mang 1 chieu sau khi sap xep\n");
    xuatmang(a, n);
}