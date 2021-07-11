#include <iostream>
using namespace std;
class SP
{
private:
    char *ten;
    char *ID;
    float tinhthanhtien();
public:
    float dongia;
    int soluong;
    float thanhtien;
    friend istream& operator >>(istream& input, SP& sp);
    friend ostream& operator <<(ostream& output, SP sp);
    SP(/* args */);
    ~SP();
};

SP::SP(/* args */)
{
    this->ten = new char[20];
    this->ID = new char[10];
    this->dongia = 0;
    this->soluong = 0;
    this->thanhtien = 0;
}

SP::~SP()
{
    delete[] ten;
    delete[] ID;
}

float SP::tinhthanhtien() {
    this->thanhtien = this->dongia * this->soluong;
    return this->thanhtien;
}

istream& operator >>(istream& input, SP& sp)
{
    cout << "Enter name of product: ";
    fflush(stdin);
    cin.getline(sp.ten,20);
    cout << "Enter ID of product: ";
    fflush(stdin);
    cin.getline(sp.ID,10);
    cout << "Enter dongia of product: ";
    fflush(stdin);
    input >> sp.dongia;
    cout << "Enter soluong of product: ";
    input >> sp.soluong;
    cout << "Total: " << sp.tinhthanhtien() << endl;

    return input;
}

ostream& operator <<(ostream& output, SP sp)
{
    output << "\n\nOutput:! \n";
    output << "Ten: " << sp.ten << endl;
    output << "ID: " << sp.ID << endl;
    output << "Dongia: " << sp.dongia << endl;
    output << "Soluong: " << sp.soluong << endl;
    output << "Total: " << sp.tinhthanhtien() << endl;

    return output;
}


int main()
{
    SP sp;
    cin >> sp;
    cout << sp;
    sp.~SP();
    cout << sp;
    return 0;
}