#include <iostream>
using namespace std;

int main() {
    int marks[5];
    int total = 0;
    cout << "Enter marks for 5 subjects: ";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
        total += marks[i];
    }

    double average = total / 5.0;
    double percentage = (total / 500.0) * 100;
    char grade;

    if (percentage >= 90) grade = 'A';
    else if (percentage >= 75) grade = 'B';
    else if (percentage >= 60) grade = 'C';
    else if (percentage >= 40) grade = 'D';
    else grade = 'F';

    cout << "Total: " << total << endl;
    cout << "Average: " << average << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}