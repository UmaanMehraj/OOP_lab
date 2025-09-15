#include<iostream>
#include <cmath>

using namespace std;

int main(){
    int length, sum;
    float squareSum = 0;
    cout << "Enter number of elements: ";
    cin >>length;

    int arr[length];

    cout << "Enter array entries: ";

    for (int i = 0; i< length; i++){
        cin >> arr[i];
    }
    int smallest = arr[0];
    int largest = smallest;
    for (int i = 0; i < length; i++){
        if (arr[i] > largest) largest = arr[i];
    }

    for (int i = 0; i < length; i++){
        if(arr[i] < smallest) smallest = arr[i];
    }

    for (int i = 0; i < length; i++){
        sum += arr[i];
        squareSum += pow(arr[i], 2);
    }
    float avg = sum / length;

    float stdDeviation = sqrt((squareSum/length) - pow(avg, 2) );

    cout << "Standard deviation of the given data is: " << stdDeviation << endl;
    cout <<  "Data lies in the range: " <<  smallest <<" < data < " << largest << endl; 


}