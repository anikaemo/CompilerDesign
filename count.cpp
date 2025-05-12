
#include<iostream>
using namespace std;
int main()
{
    string input;
    int alphabets = 0, digits = 0, special = 0;
    cout << "Enter a string: ";
    getline(cin,input);

    for(char ch: input)
    {
        if(isalpha(ch))
            alphabets++;
        else if (isdigits(ch))
            digits++;
        else
            special++
    }
}
