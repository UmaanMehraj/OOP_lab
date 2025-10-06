#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // allows spaces

    int upperCount = 0, lowerCount = 0, digitCount = 0, spaceCount = 0, specialCount = 0;

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];

        // Uppercase letters (A-Z)
        if (ch >= 'A' && ch <= 'Z')
            upperCount++;

        // Lowercase letters (a-z)
        else if (ch >= 'a' && ch <= 'z')
            lowerCount++;

        // Digits (0-9)
        else if (ch >= '0' && ch <= '9')
            digitCount++;

        // Whitespaces (space, tab, newline)
        else if (ch == ' ' || ch == '\t' || ch == '\n')
            spaceCount++;

        // Everything else → special character
        else
            specialCount++;
    }

    cout << "Uppercase letters: " << upperCount << endl;
    cout << "Lowercase letters: " << lowerCount << endl;
    cout << "Digits: " << digitCount << endl;
    cout << "Whitespace characters: " << spaceCount << endl;
    cout << "Special characters: " << specialCount << endl;

    return 0;
}
