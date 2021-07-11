/*
    Viết hàm hoán vị hai biến thực a,b bằng cách sử dụng con trỏ (đối vào là hai con trỏ).
    Viết chương trình chính nhập hai số tực a,b. Sử dụng hàm trên để đổi chỗ a và b.
*/

#include <iostream>

void Swap(float* a, float* b)
{
    float temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    float first_num = 3.32;
    float second_num = 23423.32;

    
    std::cout << first_num << " " << second_num << std::endl;
    
    Swap(&first_num,&second_num); // because using pointer so the argument have to be address


    // === PRINT ==
    std::cout << first_num << " " << second_num << std::endl;
    return 0;
}