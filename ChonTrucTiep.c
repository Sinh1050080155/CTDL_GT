/*
    Cho mảng gồm các phần tử { 41, 23, 4, 14, 56, 1 } nhập vào từ bàn phím. 
    Viết chương trình để sắp xếp.
    Sử dụng phương pháp sắp xếp chọn trực tiếp để sắp xếp
*/
#include<stdio.h>
int sxchon(int a[], int n )
{
	for(int i = 0; i < n-1 ; i++ )
	{
		int tim = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] < a[tim] )
			{
				tim = j;
			}
		}
		int temp = a[i];
		a[i]= a[tim];
		a[tim]= temp;	
	}
}
void xuat(int a[], int n ) {
	int i;
 	for(i = 0; i < 5; i++) {
 		printf("%5d", a[i]);
	 }
 	printf("\n");
}
int main() {
	int a[6] = { 41, 23, 4, 14, 56, 1 };
	xuat(a, 6);
	sxchon(a, 6);
	printf("\nMang sau sap xep: ");
	xuat(a, 6);
	
}