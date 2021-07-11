#include <iostream>
#include <regex>
using namespace std;
int main()
{
    string str;
    while (true)
    {
        cin >> str;
        //regex e("abc.",regex_constants::icase); // .Any charaters except newline
        //regex e("abc?");                          // ?  Zero or 1 preceding characters
        //regex e("abc*");                            // * Zero or more preceding characters
        // regex e("abc+");                             // +   One or more preceding characters


        // regex e("ab[cd]");                               //[...] Any character inside the square brackets
        // -> abc => matched, ab -> matched, abcccddd -> matched, abbcc -> notmatched   

        //
        regex e("ab[^cd]");                               // [...]  Any character not inside the square brackets
        // -> ab => matched, abe -> matched, abc -> not matched!


        regex e("abc[cd]{3}");                                // Less than 3 characters
        //abd -> not matched, abddd -> matched, abcdc -> matched, abcdcd -> not matched!


        
        bool match = regex_match(str,e);
        cout << (match ? "Matched" : "Not matched") << endl;
    }
    
    return 0;
}