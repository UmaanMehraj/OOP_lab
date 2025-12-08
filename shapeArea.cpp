#include <iostream>

using namespace std;

class Shape{
  public:
    virtual float area() = 0;
};

class Circle: public Shape{
  float radius;
  public:
    Circle(float r){
      radius = r;
    }
    float area(){
      return 3.14 * radius * radius;
    }
};

class Rectangle: public Shape{
  float length, width;

  public:
    Rectangle(float l, float w){
      length = l;
      width = w;
    }
    float area(){
      return length * width;
    }
};

class Square: public Shape{
  float side;
  public :
    Square(float s){
      side = s;
    }
    float area(){
      return side*side;
    }
};



int main(){
  Shape *shapePtr;
  int choice;
  float r, l, w, s;

  cout << "Enter choice (1. Circle 2. Rectangle 3. Square )" << endl;
  cin >> choice;

  switch(choice){
    case 1:
      cout << "Enter radius: ";
      cin >> r;
      shapePtr = new Circle(r);
      break;
    case 2:
      cout << "Enter length and width: ";
      cin >> l >> w;
      shapePtr = new Rectangle(l, w);
      break;
    case 3:
      cout << "Enter side: ";
      cin >> s;
      shapePtr = new Square(s);
      break;

    default:
      cout << "Invalid Choice" <<  endl;
      return 0;
  }

  cout << "Area = " << shapePtr->area() <<  endl;

  delete shapePtr;

  return 0;
}
