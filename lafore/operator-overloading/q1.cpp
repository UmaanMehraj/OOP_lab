#include <iostream>
using namespace std;

class Distance 

{   
    private:
        int feet;
        float inches;
    public: //no-args constructor
        Distance() : feet(0), inches(0.0){}
        Distance(int x, float y): feet(x), inches(y){}

    void showdist() //display distance
    { cout << feet << "\'-" << inches << '\"'; }

    Distance operator-(Distance x){
        int newFeet = feet - x.feet;
        float newInches = inches - x.inches;

        if(newInches < 0){
            newFeet--;
            newInches += 12.0;
        }
        
        return Distance(newFeet, newInches);

    }

    };
int main(){
    void fancyDist(Distance); 
    Distance dist1(4,2.35F); 
    Distance dist2(1, 3.5 );
    Distance dist3;
    dist3 = dist1 - dist2;
    dist3.showdist();
    return 0;
}