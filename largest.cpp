#include<iostream>

using namespace std;

int main(){
    int length, sum;
    double avg;
    cout << "Enter number of elements: ";
    cin >>length;

    int arr[length];

    cout << "Enter array entries: ";

    for (int i = 0; i< length; i++){
        cin >> arr[i];
    }
    int largest = arr[0];
    int smallest = largest;
    for (int i = 0; i<length; i++){
        if(arr[i]> largest){
            largest = arr[i];
        }
    }

    for (int i =0; i< length; i++){
        if(arr[i] < smallest){
            smallest = arr[i];

        }
    }

    for (int i = 0; i < length; i++){
        sum += arr[i];
        
    }
    avg = sum/length;

    cout << "Largest is: " << largest << endl;
    cout << "Smallest is: " << smallest << endl;
    cout << "Average is: " << avg << endl;

}