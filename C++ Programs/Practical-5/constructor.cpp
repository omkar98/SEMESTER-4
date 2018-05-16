/*AIM: Constructors: A default  & parameterized Constructor*/
/*Time:Wed 16 May 2018 02:04:47 PM IST */
/*Main purpose of a constructor is to initialization of an object.
This initialization is soo important, that the conpiler implicitly defines a default constructor even incase it isn's called.*/
#include<iostream>
using namespace std;
/*A constructor is called as soon as an object is created.*/
class sample{
    private:
        int a;
        int b;
    public:
    /*We can define a constructor inside of a class*/
        sample() // constructors don't have return_type
        {
            a=10;
            b=20;
        }
        sample(int, int);
        void display(void);
};
/*We can also define a constructor outside of a class*/
sample::sample(int x, int y)
{
    b=x;
    a=y;
}
void sample::display(void)
{
    cout<<"a = "<<a<<" | b = "<<b<<endl;
}

int main ()
{
    sample s1,s2(50,100);
    cout<<"From Default Constructor: ";
    s1.display();
    cout<<"From Parameterized Constructor: ";
    s2.display();
    return 0;
}

/*
OUTPUT
From Default Constructor: a = 10 | b = 20
From Parameterized Constructor: a = 100 | b = 50
*/
