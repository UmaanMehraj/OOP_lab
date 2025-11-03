#include <iostream>
using namespace std;

void findMinMax(int arr[], int n, int &min, int &max) {
    if (n <= 0) return;

    min = max = arr[0];

    for(int i = 1; i < n; i++) {
        if(arr[i] < min) {
            min = arr[i];
        }
        if(arr[i] > max) {
            max = arr[i];
        }
    }
}

int main() {
    int n;
    cout << "Enter the size of array (max 100): ";
    cin >> n;
    
    if (n > 100 || n <= 0) {
        cout << "Invalid array size!" << endl;
        return 1;
    }

    int arr[100]; 
    
    cout << "Enter " << n << " elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int min, max;
    findMinMax(arr, n, min, max);
    
    cout << "Minimum element: " << min << endl;
    cout << "Maximum element: " << max << endl;
    
    return 0;
}