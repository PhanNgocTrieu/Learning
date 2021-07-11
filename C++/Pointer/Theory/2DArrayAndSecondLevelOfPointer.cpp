#include <iostream>
using namespace std;
int main()
{
    int **p = new int*[5]; // mảng 2D của con trỏ
    // mỗi phần tử là 1 mảng con trỏ
    // ví dụ p[i][j] => con trỏ tại i là 1 mảng con trỏ có j con trỏ
    // cũng như: p[i][j] == *(*(p + i)  + j) ==> trỏ đến vùng nhớ của hàng thứ i cột thứ j

    // Assigning value:
    for (int i = 0; i < 5; i++)
    {
        p[i] = new int[8];
        for (int j = 0; j < 8; j++)
        {
            p[i][j] = i+j;
            // hoặc *(*(p + i)+ j) = i + j;
        }
    }

    // Printing:
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 8; j++)
        {
           cout << *(*(p + i)+ j) << " ";
        }
        cout << endl;
    }


    // hủy bộ nhớ:
    for (int i = 0; i < 5; i++)
    {
        delete *(p + i);
        *(p + i) = NULL; // for assurance - if we want
    }
    delete p;
    p = NULL; // for assurance - if we want

    return 0;
}