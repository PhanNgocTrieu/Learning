#include <iostream>
#include <iomanip>


namespace Integer {
	void swap(int32_t* fir_num, int32_t* sec_num) {
		int32_t temp = *fir_num;
		*fir_num = *sec_num;
		*sec_num = temp;
	}
	void print(int32_t fir_num, int32_t sec_num)
	{
		std::cout << "Print integer numbers! \n";
		std::cout << "fir_iNum: " << fir_num << "\n";
		std::cout << "sec_dNum: " << sec_num << "\n";
		std::cout << "\n";
	}
}

namespace Float {
	void swap(double* fir_num, double* sec_num) {
		double temp = *fir_num;
		*fir_num = *sec_num;
		*sec_num = temp;
	}
	void print(double fir_num, double sec_num)
	{
		std::cout << "Print Float numbers! \n";
		std::cout << "fir_dNum: " << std::setprecision(20) << fir_num << "\n";
		std::cout << "sec_dNum: " << std::setprecision(20) << sec_num << "\n";
		std::cout << "\n";
	}
}



void solve_swap()
{
	int32_t fir_iNum{}, sec_iNum{};
	double fir_dNum{}, sec_dNum{};

	std::cout << "Enter 2 integer nums: ";
	std::cin >> fir_iNum >> sec_iNum;


	std::cout << "Enter 2 float nums: ";
	std::cin >> fir_dNum >> sec_dNum;

	std::cout << "\nOutput:\n";

	std::cout << "Before: \n";
	Integer::print(fir_iNum, sec_iNum);
	Float::print(fir_dNum, sec_dNum);

	// swap
	Integer::swap(&fir_iNum, &sec_iNum);
	Float::swap(&fir_dNum, &sec_dNum);

	
	std::cout << "After: \n";
	Integer::print(fir_iNum, sec_iNum);
	Float::print(fir_dNum, sec_dNum);

}