#include <iostream>

using namespace std;

class Point {
    int x;
    int y;

public:

    //default constructor
    Point(){
        x=0;
        y=0;
    }

    // Parameterized constructor
    Point (int X , int Y){
        x=X;
        y=Y;

    }

    //set
    void set_x(int X){
    x=X;
    }

    void set_y (int Y){
    y=Y;
    }

    //grt

    int get_x (){return x;}
    int get_y (){return y;}

};

class Circle {
    Point center ;
    double radius ;

public :

    // Default constructor
    Circle(){
       center = Point(0, 0);
        radius = 0;

    }

    // Parameterized constructor
    Circle(Point c , double r){
    center = c;
    radius = r;
    }

    Circle (int x , int y , double r) : center(x,y){
    radius = r;
    }

    //set

    void set_radius(double r) {
    radius = r;
    }

    void set_center (Point c){
    center = c;
    }

    //get
    double get_radius(){return radius;}

    Point get_center (){return center;}

    //method

    double calcArea(){
        return 3.14 * (radius*radius);

    }

};

int main()
{
    Circle c (3,4,3.2);
    Circle c1 = c;
    cout<<"Area = "<<c1.calcArea()<<endl;

    return 0;
}
