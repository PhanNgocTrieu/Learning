// Xây dựng lớp biểu diễn khái niệm số phức với hai thành phần dữ liệu thực, ảo
// và các hàm thành phần xuất, nhập, định giá trị cho số phức, cộng, trừ, nhân, chia
// hai số phức. Viết chương trình cho phép nhập vào hai số phức,
//  in ra kết quả các phép toán cộng, trừ, nhân, chia hai số phức kể trên.
// vi du: cho 2 so phuc A(a1,a2);B(b1,b2);
// * A + B = (a1 + a2, b1 + b2)
// * A - B = (a1 - b2, b1 - b2)
// * A * B = (a1,a2)*(b1,b2) = a1b1 + a1b2i + a2b1i - a2b2 = (a1*b1 - a2*b2, a1*b2 + a2*b1)  
// * A / B = ( (a1*b1 + a2*b2)/(b1^2 + b2^2), (b1*a2 - a1 * b2)/(b1^2 + b^2))

#include <iostream>

class Sophuc
{
private:
    float real;
    float imag;
public:
    Sophuc();
    ~Sophuc();

    void Get(float real, float imag)
    {
        this -> real = real;
        this -> imag = imag;
    }

    Sophuc Add(Sophuc sp1, Sophuc sp2)
    {
        Sophuc res;
        res.real = sp1.real + sp2.real;
        res.imag = sp1.imag + sp2.imag;
        return res;
    }

    Sophuc Sub(Sophuc sp1, Sophuc sp2)
    {
        Sophuc res;
        res.real = sp1.real - sp2.real;
        res.imag = sp1.imag - sp2.imag;
        return res;
    }

    Sophuc Time(Sophuc sp1, Sophuc sp2)
    {
        Sophuc res;
        res.real = sp1.real*sp2.real - sp1.imag*sp2.imag;
        res.imag = sp1.real*sp2.imag - sp1.imag*sp2.real;
        return res;
    }

    Sophuc Divi(Sophuc sp1, Sophuc sp2)
    {
        Sophuc res;
        res.real = (sp1.real*sp1.imag - sp2.real*sp2.imag)/(sp2.real*sp2.real - sp2.imag*sp2.imag);
        res.imag = (sp2.real*sp1.imag - sp1.real*sp2.imag)/(sp2.real*sp2.real - sp2.imag*sp2.imag);
        return res;
    }

    void Show()
    {
        std::cout << this -> real << "/" << this -> imag << std::endl;
    }
};

Sophuc::Sophuc()
{
    real = 0;
    imag = 0;
}

Sophuc::~Sophuc()
{
    //
}



int main()
{
    Sophuc sp1,sp2;
    Sophuc sp3,sp4,sp5,sp6;

    sp1.Get(3,5);
    sp2.Get(2,31);
    sp3 = sp3.Add(sp1,sp2);
    sp4 = sp4.Sub(sp1,sp2);
    sp5 = sp5.Time(sp1,sp2);
    sp6 = sp6.Divi(sp1,sp2);

    sp1.Show();
    sp2.Show();
    sp3.Show();
    sp4.Show();
    sp5.Show();
    sp6.Show();


    return 0;
}