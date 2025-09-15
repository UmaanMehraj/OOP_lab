#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int data [] = {55, 62, 68, 74, 59, 45, 41, 58, 60, 67, 65, 78, 82, 88, 91,92, 90, 93, 87, 80, 78, 79, 72, 68, 61, 59 };

    int dataLength = sizeof(data)/sizeof(int);
    int tempSum = 0;
    float avgTemp;

    int hotDays = 0, pleasentDays = 0, coolDays = 0;
    
    for (int i = 0; i < dataLength; i++){
        if (data[i] >= 85) {
            cout << data[i] << ": Hot day!" << endl;
            hotDays++;
        }
        else if (data[i] >= 60 && data[i] < 85){
            cout << data[i] << ": PLeasant day!" << endl;
             pleasentDays++;
        }
        else if (data[i] > 0 && data[i] < 60) {
            cout << data[i] << ": Cool day!" << endl;
            coolDays++;
        }
    }

    for (int i = 0; i < dataLength; i++){
        tempSum += data[i];
    }

    avgTemp = tempSum / dataLength;


    cout << "****************************" << endl;
    cout << "Hot days: " << hotDays << endl;
    cout << "Pleasant days: " << pleasentDays << endl;
    cout << "Cool Days: " << coolDays << endl;
    cout << "Average Temperature: " << avgTemp << endl;
    cout << "****************************" << endl;
}