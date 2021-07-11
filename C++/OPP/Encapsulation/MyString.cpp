#include <iostream>
#include <string>


class MyString
{
private:
    char* m_string = {NULL}; // dynamically allocate our string here
    int m_length; // keep the track of string length
public:
   int getLength() { return m_length; } // access function to get value of m_length
   void setString(char* str)
   {
       *m_string = *str;
   }
   char* getString()
   {
       return m_string;
   }
};

int main()
{
    

}
