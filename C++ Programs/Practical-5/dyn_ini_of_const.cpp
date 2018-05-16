/*AIM: Dynamic Initialiation of Constructors.*/
/*Time: Wed 16 May 2018 06:01:33 PM IST */

/*Notes:
a) Dynamic initialization is that in which initialization value isn't known at compile-time. It's computed at runtime to initialize the variable.
b) §3.6.2/1 from the C++ Standard (2003) says,
Objects with static storage duration (3.7.1) shall be zero-initialized (8.5) before any other initialization takes place. Zero-initialization and initialization with a constant expression are collectively called static initialization; all other initialization is dynamic initialization.*/
#include<iostream>
using namespace std;

class si{
    private:
        float interest, rate, time, principal;
    public:
    si(float x, float y, float z)
    {
        principal = x;
        rate = y;
        time = z;
        
    }
    void cal()
    {
    /*Initialially the value of interest is not known (Not even initialized to zero). This value of interest is obtained at the run time, when the calculation is done.*/
        cout<<"Initially 'interest' is : "<<interest<<endl; // Initially the value isn't initialized. Hence, it gets garbage value
        interest = (principal*rate*time)/100;
        cout<<"Obtained Interest = "<<interest<<endl;
    }
};


int main ()
{
    si p1(1000,2.5,3);
    p1.cal();
    return 0;
}

/*
OUTPUT
Initially 'interest' is : 5.88131e-39
Obtained Interest = 75
*/
