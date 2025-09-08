#include<iostream>
using namespace std;

int main(){
    int marks[5];
    char grade[5];   

    cout << "Enter marks for 5 subjects (out of 100): " << endl;

    for (int i =0;i <5; i++){
        cin >> marks[i];
    }

    for (int i = 0; i < 5; i++){
        if (marks[i] >= 90 && marks[i] < 100) grade[i] = 'A';
        else if (marks[i] >= 80 && marks[i] < 90 ) grade[i] = 'B';
        else if (marks[i] >= 70 && marks[i] < 80) grade[i] = 'C';
        else if (marks[i] >= 60 && marks[i] < 70) grade[i] = 'D';
        else if (marks[i] >=50 && marks[i] < 60) grade[i] = 'E';
        else grade[i] = 'F';

    }
    int counter = 0;
    cout << "Grades are: " <<endl;
    for (int i = 0; i < 5; i++){
        cout << grade[i] << endl;
        if (grade[i] == 'F') counter++;
    }

    if (counter >=2) cout << "Repeat Year!";
}