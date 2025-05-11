#include <iostream>
using namespace std;

int main() {
    string input, result;
    cout << "Enter a string: ";
    getline(cin, input);

    bool spaceFound = false;

    for (char ch : input) {
        if (ch != ' ') {
            result += ch;
            spaceFound = false;
        } else {
            if (!spaceFound) {
                result += ' ';
                spaceFound = true;
            }
        }
    }


    if (!result.empty() && result[0] == ' ')
        result.erase(0, 1);


    if (!result.empty() && result[result.length() - 1] == ' ')
        result.erase(result.length() - 1, 1);

    cout << "Result: \"" << result << "\"" << endl;

    return 0;
}

