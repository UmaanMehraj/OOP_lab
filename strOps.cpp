#include<iostream>


using namespace std;

int strLen(char str[]);
void revStr(char str[]);
void strConcat(char str1[], char str2[]);
int countChar(char str[], char search);

int main(){
    char str[100];

    cout << "Enter string: ";
    cin >> str;

    cout << "Length of string is: " << strLen(str) << endl;

    revStr(str);
    char str1[]= "hello";
    char str2[] = "there";

    strConcat(str1, str2);


}

int strLen(char str[]){
    int i = 0;
    while(str[i]!= '\0'){
        i++;
    }

    return i;
}

void revStr(char str[]){
    for (int i = strLen(str) -  1; i >= 0; i--){
        cout << str[i];
    }
    cout << endl;
}

void strConcat(char str1[], char str2[]){
    cout << str1 << str2 << endl;
}

int countChar(char str[], char search){
    int count = 0;
    int i = 0;

    while(str[i] != '\0'){
        if(str[i] == search){
            count++;
        }
        i++;
    }
    return count;
}