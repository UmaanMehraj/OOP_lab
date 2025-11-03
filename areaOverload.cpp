#include <iostream>

using namespace std;

float area(float rad);
float area(float len, float wid);
float area(float base, float height);

int main(){
    return 0;
}

float area(float rad){
    return 3.14 * rad * rad;
}

float area(float len, float wid){
    return len * wid;
}

float area(float base, float height){
    return (1/2) * base * height;
}