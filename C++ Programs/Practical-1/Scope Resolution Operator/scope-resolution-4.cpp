/*(d) Used in multiple Inheritance: If two classes have a same variable, then we can access to this variable using scope resolution operator. */
/*Time: Mon 07 May 2018 08:07:56 AM IST */
#include<iostream>
using namespace std;

class cse1
{
    protected: 
      int x;
    public:
        cse1()
        { x=1; }    
};

class cse2
{
    protected:
        int x;
    public:
        cse2()
        { x=2; }
};

class cse: public cse1, public cse2
{
    public:
    void access()
    {
        cout<<"X of CSE-1 is: "<<cse1::x<<endl; 
        cout<<"X of CSE-2 is: "<<cse2::x<<endl;
    }
};

int main ()
{   
    cse cr;
    cr.access();   
    return 0;
}

/*
X of CSE-1 is: 1
X of CSE-2 is: 2
*/
