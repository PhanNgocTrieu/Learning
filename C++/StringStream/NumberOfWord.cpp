#include <iostream>
#include <string>
#include <sstream> //using this libary for stringstream

int countWords(std::string str)
{
    
    //break input into word using string stream
    std::stringstream s(str); // Used for breaking words
    std::string words; // to stored words
    int count = 0;
    while (s >> words) //each word
    {
        /* code */
        count++;
    }
    return count;
}
int main()
{
    std::string s = "Hello Everyone, my name is John, I'm 22 years old! nice to meet you!";
    std::cout << "Total number of words: " << countWords(s) << std::endl;

    return 0;
}