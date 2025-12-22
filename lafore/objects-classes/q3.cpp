#include <iostream>

using namespace std;

class Time{
    protected:
        int hours, minutes, seconds;
    public:
        Time(): hours(0), minutes(0), seconds(0){};
        Time(int x, int y, int z): hours(x), minutes(y), seconds(z){};

        void display(){
            cout << "Time: " << hours << " : " << minutes << " : " << seconds <<  endl;
        }

        void add(Time x, Time y) {

        int total_seconds = x.seconds + y.seconds;
        seconds = total_seconds % 60;

        int total_minutes = x.minutes + y.minutes + (total_seconds / 60);
        minutes = total_minutes % 60;

        hours = x.hours + y.hours + (total_minutes / 60);
    }
};


int main(){
    Time t1(1, 20, 30), t2(12, 0, 0);
    Time t3;

    t3.add(t1, t2);

    t3.display();

    return 0;
}