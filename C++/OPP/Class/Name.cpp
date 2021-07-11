#include <iostream>
#include <string>
#include <cstring>

class Name
{
private:
    char *name;
public:
    Name();
    Name(char*);
    ~Name();
    void Set();
    void Show();
};
Name::Name()
{

}
Name::Name(char* name)
{
    this -> name = new char[strlen(name)];
    strcpy(this->name,name);
}

Name::~Name()
{
    delete[] name;
}

void Name::Set()
{
    char name_temp[50];
    std::cout << "Enter Name: ";
    std::cin.getline(name_temp,50);
    this->name = name_temp;   
}
void Name::Show()
{
    std::cout << this -> name << std::endl;
}

int main()
{
    Name *name = new Name("Nhan khung");
    Name *name_2 = new Name();
    name -> Show();
    name_2 -> Set();
    name_2 -> Show();


    //delete
    name ->~Name();
    name_2 ->~Name();
    return 0;
}