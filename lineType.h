#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LineType
{
public:

    LineType()
    {
        a = 0;
        b = 0;
        c = 0;
    }

    LineType(double A, double B, double C)
    {
        a = A;
        b = B;
        c = C;
    }

    bool get_slope(double& slope) {
        if (b != 0) {
            slope = -a / b;
            return true; 
        }
        else
            return false;
    }

    bool are_equal(LineType line) {
        if (a == line.a)
            return true;
            
        else 
            return false;
    }

    bool are_parallel(LineType line) {
        double slope1 = -a / b;
        double slope2 = -line.a / line.b;
        
        if (slope1 == slope2)
            return true;
            
        else 
            return false;
    }

    bool are_perpendicular(LineType line) {
        double slope1 = -a / b;
        double slope2 = -line.a / line.b;
        
        if (slope1 != slope2)
            return true;
            
        else 
            return false;
    }

    bool get_intersection(LineType line, double& x, double& y) {
        double slope1 = -a / b;
        double slope2 = -line.a / line.b;
        
        if (slope1 == slope2)
            return false;
            
        else {
            x = ((b * -line.c) - (line.b * -c))/((a * line.b) - (line.a * b));
            //y = ((-c * line.a) - (-c * line.a))/((a * line.b) - (line.a * b));
            y = ((b * -line.c) - (line.b * -c))/((a * line.b) - (line.a * b));
            return true;
        }
    }

    void set_line(double a, double b, double c) {
        
    }

private: 
    double a;
    double b;
    double c;

    double get_a() {

    }
    double get_b() {

    }
    double get_c() {

    }
};
