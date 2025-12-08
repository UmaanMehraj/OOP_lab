#include<iostream>

using namespace std;

class time12{
    private:
        int hour;
        int minutes;
        int seconds;
        bool type; // am: true, pm:false 
  
    public:
    time12(): hour(12), minutes(0), seconds(0), type(true){}
    time12(int x, int y, int z, bool gg): hour(x), minutes(y), seconds(z), type(gg){}

    // Getter
    int getHour(){
        return hour;
    }
    int getMinutes(){
        return minutes;
    }
    int getSeconds(){
        return seconds;
    }
    bool getType(){
        return type;
    }

    void getInput(){
        int h,m,s;
        bool t;

        cout << "Enter hours, minutes, seconds, type(Non-zero, Zero): ";
        cin >> h >> m >> s >> t;
        cout << h << m << s << t<< endl;
    }

    


};

class time24{
    private:
        int hour;
        int minutes;
        int seconds;

    public:
    time24(): hour(12), minutes(0), seconds(0){}
    time24(int x, int y, int z): hour(x), minutes(y), seconds(z){}

    // Getter
    int getHour(){
        return hour;
    }
    int getMinutes(){
        return minutes;
    }
    int getSeconds(){
        return seconds;
    }


    void getInput(){
        int h,m,s;
        bool t;

        cout << "Enter hours, minutes, seconds, type(Non-zero, Zero): ";
        cin >> h >> m >> s >> t;
        cout << h << m << s << t<< endl;
    }


};


int main(){
    time12 t1;
    t1.getInput();
    return 0;
}