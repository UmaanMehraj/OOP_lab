#include <iostream>
using namespace std;

// Function to sort array (simple Bubble Sort)
void sortArray(double arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                double temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Compute Mean
double computeMean(double arr[], int n) {
    double sum = 0.0;
    for (int i = 0; i < n; i++)
        sum += arr[i];
    return sum / n;
}

// Compute Median
double computeMedian(double arr[], int n) {
    sortArray(arr, n);
    if (n % 2 == 0)
        return (arr[n / 2 - 1] + arr[n / 2]) / 2.0;
    else
        return arr[n / 2];
}

// Compute Mode (returns first mode if multiple)
double computeMode(double arr[], int n) {
    int maxCount = 0;
    double mode = arr[0];

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == arr[i])
                count++;
        }
        if (count > maxCount) {
            maxCount = count;
            mode = arr[i];
        }
    }

    if (maxCount == 1)
        return -1; // No mode (all values unique)
    return mode;
}

// Compute Variance
double computeVariance(double arr[], int n) {
    double mean = computeMean(arr, n);
    double sumSq = 0.0;
    for (int i = 0; i < n; i++) {
        double diff = arr[i] - mean;
        sumSq += diff * diff;
    }
    return sumSq / n;
}

// Compute Standard Deviation
double computeStdDev(double arr[], int n) {
    double var = computeVariance(arr, n);
    // Manual square root (Newton-Raphson method)
    double x = var;
    double root = 0.0;

    if (x == 0)
        return 0;

    double guess = x / 2.0;
    for (int i = 0; i < 10; i++)
        guess = (guess + x / guess) / 2.0; // iterative approximation

    root = guess;
    return root;
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    double arrD[100]; // double precision
    float arrF[100];  // float precision

    cout << "Enter " << n << " real numbers: ";
    for (int i = 0; i < n; i++) {
        cin >> arrD[i];
        arrF[i] = (float)arrD[i];
    }

    // Using double precision
    double meanD = computeMean(arrD, n);
    double medianD = computeMedian(arrD, n);
    double modeD = computeMode(arrD, n);
    double varianceD = computeVariance(arrD, n);
    double stdDevD = computeStdDev(arrD, n);

    // Using float precision
    float arrFcopy[100];
    for (int i = 0; i < n; i++) arrFcopy[i] = arrF[i];

    // Manually compute for float using same logic
    float sumF = 0;
    for (int i = 0; i < n; i++) sumF += arrF[i];
    float meanF = sumF / n;

    // Variance and Std Dev for float
    float varF = 0;
    for (int i = 0; i < n; i++) {
        float diff = arrF[i] - meanF;
        varF += diff * diff;
    }
    varF /= n;

    // Approximate sqrt for float (manual Newton method)
    float guess = varF / 2.0f;
    for (int i = 0; i < 10; i++)
        guess = (guess + varF / guess) / 2.0f;
    float stdDevF = guess;

    // Display results
    cout << "\n--- Results (Double Precision) ---\n";
    cout << "Mean = " << meanD << endl;
    cout << "Median = " << medianD << endl;
    if (modeD == -1)
        cout << "Mode = None (all values unique)\n";
    else
        cout << "Mode = " << modeD << endl;
    cout << "Variance = " << varianceD << endl;
    cout << "Standard Deviation = " << stdDevD << endl;

    cout << "\n--- Results (Float Precision) ---\n";
    cout << "Mean = " << meanF << endl;
    cout << "Variance = " << varF << endl;
    cout << "Standard Deviation = " << stdDevF << endl;

    cout << "\nDifference in Mean (double - float) = " << meanD - meanF << endl;
    cout << "Difference in Std Dev (double - float) = " << stdDevD - stdDevF << endl;

    return 0;
}
