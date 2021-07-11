/*
    Viết chương trình nhập vào mảng a gồm n phần tử nguyên ngẫu nhiên [0...100]
    Sắp xếp mảng theo chiều giảm dần (lưu ý: sử dụng tên mảng như con trỏ và sử dụng con trỏ)
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

void NhapMang(int *&a, int n); //hàm nhapmang với 2 tham số truyền vào: 1) mảng kiểu int *a (vì có thay đổi giá trị của mảng nên dùng tham chiếu(&) hoặc toán tử địa chỉ(*) )và size: int n.
void XuatMang(int *a, int n); // ham xuatmang với 2 tham số là 1 mảng kiểu in  int *a, và kích cỡ size int n
void RangeArray(int *&a, int n);
void Swap(int *a, int *b);

int main()
{
    int n;
    std::cout << "Enter size: ";
    std::cin >> n;
    int *arr;
    NhapMang(arr,n);
    std::cout << "Before arrange: \n";
    XuatMang(arr,n);
    RangeArray(arr,n);
    std::cout << "After arrange: \n";
    XuatMang(arr,n);
    return 0;
}

void NhapMang(int *&a, int n) {

    srand(time(NULL));
    a = new int[n];
    for (int i = 0; i < n; i++)
    {
        *(a + i) = rand()%101;
    }
    
}

void XuatMang(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        std::cout << *(a + i) << " ";
    }
    std::cout << "\n";
}

void RangeArray(int *&a, int n) {
    
    for (int i = 0; i < n - 1; i++)
    {
        for (int k = i; k < n; k++)
        {
            if (a[k] > a[i]) {
                Swap(&(*(a + i)),&(*(a + k)));
                // Swap(&a[i],&a[k]);
            }
        }
        
    }
}

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

