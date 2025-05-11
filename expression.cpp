#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string expr;
    cout << "Enter a simple expression (single-digit numbers, + only): ";
    cin >> expr;

    int result = 0;

    for (int i = 0; i < expr.length(); ++i) {
        if (isdigit(expr[i])) {
            result += expr[i] - '0'; // Convert char to int
        } else if (expr[i] != '+') {
            cout << "Invalid character: " << expr[i] << endl;
            return 1;
        }
    }

    cout << "Result = " << result << endl;
    return 0;
}




