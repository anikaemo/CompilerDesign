#include <iostream>
using namespace std;

int main() {
    string input;
    int alphabets = 0, digits = 0, special = 0;

    cout << "Enter a string: ";
    getline(cin, input);

    for (char ch : input) {
        if (isalpha(ch))
            alphabets++;
        else if (isdigit(ch))
            digits++;
        else
            special++;
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << special << endl;

    return 0;
}
