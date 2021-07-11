/*
    Hãy viết hàm nhập/xuất vào một ma trận vuông cấp n với các số ngẫu nhiên [-50,100] và hàm tìm phần tử Max của ma trận này
    (Dùng con trỏ thay thế cho mảng 2 chiều)
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>

void NhapMang(float **&arr, int size); // this function has 2 arguments - 2D vector with reference for changing value and size of square matrix
void XuatMang(float **arr, int size);
float Max(float **arr, int size);

int main() {
    float** array;
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;
    NhapMang(array,n);
    XuatMang(array,n);
    std::cout << "Max of Matrix: " << Max(array,n);

}

void NhapMang(float **&arr, int size) {
    srand(time(NULL));
    arr = new float*[size];
    for (int i = 0; i < size; i++)
    {
        arr[i] = new float[size];
        // *(arr + i) = new float[size];

        for (int j = 0; j < size; j++)
        {
            *(*(arr + i) + j) = -50 + rand()%151; // from [-50,100]
            // arr[i][j] = -50 + rand()%151;
        }   
    }
}

void XuatMang(float **arr, int size) {
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            std::cout << *(*(arr + i) + j) << " "; // from [-50,100]
            // arr[i][j] = -50 + rand()%151;
        }
        std::cout << "\n";   
    }
    std::cout << "\n";
}
float Max(float **arr, int size) {
    float Max = arr[0][0];
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (*(*(arr + i) + j) > Max) // if(arr[i][j] > Max)
                Max = *(*(arr + i) + j);
                // Max = arr[i][j];
        }   
    }
    return Max;
}