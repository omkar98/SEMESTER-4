/*AIM: (c) To access static variables using scope resolution operators*/
//Mon 07 May 2018 07:34:06 AM IST 
#include<iostream>
using namespace std;

int x = 28;

class example
{
    private:
        static int x;
    public:
        static int y;
        void function(int x)
        {
          cout<<"::x is "<<::x<<endl; // Invalid for accessing static variable
          /*The above statement can only be valid for a variable x declared globally.*/
          cout<<"x is "<<x<<endl; // Locally declared x
          cout<<"Static x is "<<example::x<<endl;//accessing a static variable 'x' declared within the class 'example'. 
        }
};

int example::x = 25;
int example::y = 30;
int main ()
{
    example e1;
    e1.function(26);
    cout<<"Static y is "<<example::y<<endl;
    return 0;
}
/*
::x is 28
x is 26
Static x is 25
Static y is 30
*/

