#include <iostream>
#include <string>
class Father
{
private:
    std::string loveStory;
public:
    std::string name;
    int age;
    Father(/* args */);
};
Father::Father() {
    this -> loveStory = "";
    this -> age = 0;
    this -> name = "";
};

class Child : private Father
{
private:
    int NumbersOfRelationship;
public:
    Child(/* args */);
};
Child::Child()
{
    this -> name = "";
    this -> age = 0;
    this -> NumbersOfRelationship = 0;
}


