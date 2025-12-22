#include<iostream>
#include<cmath>

using namespace std;

class Polar{
    protected:
        float radius, angle;
    public:
        Polar():radius(0.0), angle(0.0){}
        Polar(float rad, float theta): radius(rad), angle(theta){}
    
    Polar operator+(Polar point){
        float y = radius*sin(angle) + point.radius * sin(angle);
        float x = radius*cos(angle) + point.radius * cos(angle);

        float rad = sqrt(pow(x,2) + pow(y, 2));
        float angle = tan((y/x));

        return Polar(rad, angle);
    }

    void display(){
        cout << "Point info" << endl << "Radius: " << radius << endl << "Angle: "<< angle << endl;
    }
};


int main(){
    Polar p1(5, 45), p2(5, 45);
    Polar p3 = p1 + p2;
    p3.display();
    return 0;
}