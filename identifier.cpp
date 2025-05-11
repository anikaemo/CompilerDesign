#include<iostream>
using namespace std;

int main()
{

    string word;
    cout << "Enter a word: ";
    cin >> word;

    if(word == "if" || word == "else" || word == "return" || word == "for" || word == "while"
       || word == "int" || word == "float" || word == "void")
    {
        cout << word << "is a C++ keyword" << endl;

        else
        {
           cout << word << "is  NOT a C++ keyword" << endl;
        }

    }
    return 0;
}


