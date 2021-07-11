#include <iostream>

// con trỏ void: là con trỏ đặc biệt có thể trỏ đến bất kỳ kiểu dữ liệu nào
// syntax: void *pointerVariable;
// nhưng khi gán thì nên chỉ định cho nó 1 kiểu dữ liệu cụ thể


// con tror NULL: là con trỏ chưa được cấp phát bộ nhớ
int main(int argc, char** argv)
{
    /* =================== Void pointer =============*/
    // initializing a void pointer
    int a = 3; // data type of int
    float f = 5.5; // data type of float
    int *pa; // pointer just is used for pointing to int variable
    float *pf; // pointer which just point to float variable
    void *p_a; // void pointer which can point to any data type of variable
    void *p_f;

    pa = &a; // right way
    // pa = &f // wrong way. because of difference of data type
    pf = &f;
    // using void pointer
    p_a = &a; // right way. but we should overwrite data type
    p_f = &f; // also right way

    // Thay đổi giá trị tại địa chỉ con trỏ
    // (int*) ==> ép giá trị con trị là kiểu in
    // *(int*)p ==> giá trị của con trỏ p
    (*(int*)pa) = 10; // thay đổi giá trị tại địa chỉ của con trỏ pa = 10 => a = 10


    (*(float*)pf) = 25.23; // thay đổi giá trị tại địa chỉ pf bằng 25.23 + ép kiểu float


    int *p_temp = new int; // if int *p_temp; => value *p_temp would be something and sometimes would be error
    /* ================ PRINT ============*/
    std::cout << "Address of a: " << &a << std::endl;
    std::cout << "Address of pa: " << pa << std::endl;
    std::cout << "Value of a: " << a << std::endl;
    std::cout << "Value of pa: " << *pa << std::endl;

    std::cout << "Address of f: " << &f << std::endl;
    std::cout << "Address of pf: " << pf << std::endl;
    std::cout << "Value of f: " << f << std::endl;
    std::cout << "Value of pf: " << *pf << std::endl;

    std::cout << "Value of memory place that p_temp is : " << *p_temp << std::endl; // this one would be error => stranger value
    /* =================== NULL pointer =============*/ 

    return 0;
}
