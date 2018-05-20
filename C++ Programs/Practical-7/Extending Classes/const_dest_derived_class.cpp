/*AIM:Constructors and Destructors in Derived Class.*/
/*Time: Sun 20 May 2018 06:29:10 PM IST */
#include<iostream>
using namespace std;

class Base{
    private:
        int a;
    public:
        static int count;
        Base(int k)
        {
            cout<<"Step "<<Base::count++<<" : Constructor of Base is called."<<endl;
            a=k;
        }
        void show()
        {
            cout<<"Step "<<Base::count++<<" : Member Function of Base is called."<<endl;
            cout<<" a = "<<a<<endl;
        }
        ~Base()
        {
            cout<<"Step "<<Base::count++<<" : Destructor of Base is called."<<endl;
        }
};

class Derived: public Base{
    private:
        int b;
    public:
    /*We have passed 2 values from main(from object of Derived). Both the values are caught by Derived class but only one is used, while the other value is passed to Base class.*/
    /*Syntax for Constructors in Dervied Class. */
        Derived(int x, int y):Base(x) // Base(int k) Illegeal, because we are calling the constructor of Base Class, not defining a function for base class
        {
            cout<<"Step "<<Base::count++<<" : Constructor of Derived Class is called."<<endl;
            b=y;
        }
        void show()
        {
            cout<<"Step "<<Base::count++<<" : Member Function of Derived is called."<<endl;
            Base::show();
            cout<<" b = "<<b<<endl;
        }
        ~Derived()
        {
            cout<<"Step "<<Base::count++<<" : Destructor of Derived Class is called."<<endl;
        }
};

int Base::count=1;

int main ()
{
    cout<<"Step "<<Base::count++<<" : We are in Main."<<endl;
    Derived d(5,6);
    cout<<"Step "<<Base::count++<<" : We are in Main."<<endl;
    d.show();
    cout<<"Step "<<Base::count++<<" : We are in Main."<<endl;
    return 0;
}
/*Initially, when the object of dervied class is created:
    a) Constructor defined in derived class is called(but not excuted)
    b) The compliler checks if the Base Class Constructor(declared in Derived class) has parameters in it.
        b.1) If parmeters are present, it calls the corresponding Parameterised constructor in Base Class.
        b.2) Else it calls a default constructor in Base Class (default case) 
    c) The compiler ALWAYS 'FIRST' executes parent class constructor and then executes the derived class construtor.
    d) However, for destrutor, it first "EXECUTES" the destructor of Derived Class and then the Destructor of Base Class.
       */
       
/*OUTPUT
Step 1 : We are in Main.
Step 2 : Constructor of Base is called.
Step 3 : Constructor of Derived Class is called.
Step 4 : We are in Main.
Step 5 : Member Function of Derived is called.
Step 6 : Member Function of Base is called.
 a = 5
 b = 6
Step 7 : We are in Main.
Step 8 : Destructor of Derived Class is called.
Step 9 : Destructor of Base is called.
*/
