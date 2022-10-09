#include <iostream>
#include <string>
#include <vector>

using namespace std;

class LineType 
{
private:

    //we only need 3 attributes for storing "a", "b", and "c" in the equation
    //ax + by = c

    double a, b, c;

public:

    //double slope
    //overload

    LineType()
    {
        a = 0;
        b = 0;
        c = 0;
        set_line(a, b, c);
    }

    LineType(double a, double b, double c)
    {
        set_line(a, b, c);
    }

    //This function needs to return a bool but also return the slope if it exists
    //to do so, you need to use reference parameters. Remember that reference parameters
    //are ones that "connect" to the passed in variable. and any change in the 
    //reference parameter's value will affects whatever passed into the function.
    //Here we make "input" a reference parameter by inserting an "&" sign in front of the name.
    //This allows us to pass back the slope via the input.

    bool get_slope(double&input)
    {
        if (b != 0)
        {
            input = -a / b;
            return true;
        }
        else
            return false;
    }

    //declare functions
    //void set_line(double a = 0, double b = 0, double c = 0);

    //void get_slope(doube sl);

    /*
    string to_string(string sl)
    {
        if(xco == 0)
        {
            char*intStr = itoa(xco);
            string str = string(inStr);
        }

        sl = str;

        else
            slope = -a / b;

        return sl;

    }
    */

   //void are_equal(bool ae);

   //FUNCTIONS

   //Function to set the line

   void set_line(double new_a,double new_b,double new_c)
   {
       a = new_a;
       b = new_b;
       c = new_c;
   }

   /*
   void get_slope(double sl)
   {
        if (xco == 0)
            hor = true;
        else if (yco == 0)
            ver = true;
        else 
            sl = -xco / yco;
    }
    
    void to_spring(string slope)
    {
        if(hor = true)
            slope = "0.00";
        else if(ver = true)
            slope = "undefined";
        else slope = sl;
    }
    */

   /*
   bool are_equal(bool ae)
   {
       if
   }
   */
};