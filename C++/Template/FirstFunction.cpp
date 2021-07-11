#include <iostream>
#include <cstring>
#include <string>
#include <type_traits>

// the same type:
template <typename Temp>
Temp max(Temp a, Temp b)
{
    return b < a ? a : b;
}

// this one is like comment
#ifdef multiple_type
#endif
template <typename Temp1, typename Temp2>
auto max(Temp1 a, Temp2 b)
{
    return b < a ? a : b;
}

// Thrist One: - pointer
template <typename Temp>
Temp* max(Temp* a, Temp* b)
{
    return *b < *a ? a : b;
}

// Another way
//basics/maxdecltypedecay.hpp
template <typename T1, typename T2>
auto min(T1 a, T2 b) -> typename std::decay<decltype(true?a:b)>::type
{
    return b < a ? b : a;
}



int main()
{
    std::cout << max(2,5) << std::endl;
    std::cout << max("Hi!","Hello") << std::endl;
    auto m = ::max<double>(4, 7.8);
    std::cout << m << "\n";

    std::cout << max(2,3.23) << "\n";

    std::cout << min(12312321321,-43.123123123212) << '\n';
    // print Fibonacci
    // int pos_th;
    // int f0 = 3, f1 = 4;
    // std::cout << "Enter the nth time: ";
    // std::cin >> pos_th;
    // for (int i = 2; i < pos_th; i++)
    // {
    //     std::cout << "i : " << i << "\n";
    //     std::cout << f0 << " " << f1 << " ";
    //     int temp_f0 = f0;
    //     int temp_f1 = f1;
    //     for (int j = 2; j < i; j++)
    //     {
    //         int temp = temp_f0 + temp_f1;
    //         std::cout << temp << " ";
    //         temp_f0 = temp_f1;
    //         temp_f1 = temp;    
    //     }
    //     std::cout << '\n';
    // }


    return 0;
}