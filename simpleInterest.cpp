#include<iostream>

using namespace std;

float simpleInterest(float p, float r = 5.0, float t = 2.0);

int main(){
    int price, rate, timePeriod;
    cout << "Enter Price, Rate, Time Period: ";
    cin >> price >> rate >> timePeriod;

    cout << simpleInterest(price, rate, timePeriod) << "%" << endl;
    return 0;
}

float simpleInterest(float p, float r, float t){
    return (p * r * t)/100;
}