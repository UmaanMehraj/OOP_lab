// Step Calculator: Estimate calories burned based on steps walked
#include <iostream>
using namespace std;

int main() {
    int steps;
    double calories_per_step = 0.04; // Average calories burned per step
    cout << "Enter number of steps walked: ";
    cin >> steps;
    double calories = steps * calories_per_step;
    cout << "Estimated calories burned: " << calories << " kcal" << endl;
    return 0;
}
