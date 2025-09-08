#include<iostream>
#include<cctype>

using namespace std;

int isVowel(char c);

int main(){
    char inp;
    cout << "Enter character: ";
    cin >> inp;

    switch (isVowel(inp)){
        case 1:
        cout << "A vowel, indeed!" << endl;
    }

    switch(isalpha(inp) && !isVowel(inp)){
        case 1:
        cout << "An alphabet, indeed!" << endl;
    }

    switch(isdigit(inp)){
        case 1:
        cout << "A digit, indeed" << endl;
    }
    switch(!isalnum(inp)){
        case 1:
        cout << "Some special char, indeed!" << endl;

    }
}

int isVowel(char c){
    c = tolower(c);
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') return 1;
    else return 0;
}

