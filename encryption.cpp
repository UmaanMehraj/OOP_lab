#include <iostream>
#include <string>
using namespace std;

// Function for Caesar Cipher Encryption
string caesarEncrypt(string text, int shift) {
    string encrypted = text;
    for (int i = 0; i < text.length(); i++) {
        char ch = text[i];

        // Encrypt only letters (preserve case)
        if (ch >= 'A' && ch <= 'Z')
            encrypted[i] = char(((ch - 'A' + shift) % 26) + 'A');
        else if (ch >= 'a' && ch <= 'z')
            encrypted[i] = char(((ch - 'a' + shift) % 26) + 'a');
        else
            encrypted[i] = ch; // non-alphabet unchanged
    }
    return encrypted;
}

// Function for XOR Encryption/Decryption
string xorEncrypt(string text, char key) {
    string encrypted = text;
    for (int i = 0; i < text.length(); i++) {
        encrypted[i] = text[i] ^ key; // XOR each character with key
    }
    return encrypted;
}

int main() {
    string text;
    cout << "Enter text: ";
    getline(cin, text);

    cout << "\nOriginal text and ASCII values:\n";
    for (char ch : text)
        cout << ch << " (" << int(ch) << ")  ";
    cout << "\n";

    // Caesar Cipher
    int shift;
    cout << "\nEnter Caesar Cipher shift value: ";
    cin >> shift;

    string caesar = caesarEncrypt(text, shift);

    cout << "\nCaesar Cipher Encrypted Text: " << caesar << endl;
    cout << "ASCII values after Caesar encryption:\n";
    for (char ch : caesar)
        cout << ch << " (" << int(ch) << ")  ";
    cout << "\n";

    // XOR Encryption
    char key;
    cout << "\nEnter XOR key (single character): ";
    cin >> key;

    string xorEnc = xorEncrypt(text, key);

    cout << "\nXOR Encrypted Text: " << xorEnc << endl;
    cout << "ASCII values after XOR encryption:\n";
    for (char ch : xorEnc)
        cout << ch << " (" << int(ch) << ")  ";
    cout << "\n";

    // XOR decryption (since XOR is symmetric)
    string xorDec = xorEncrypt(xorEnc, key);
    cout << "\nDecrypted back from XOR: " << xorDec << endl;

    return 0;
}
