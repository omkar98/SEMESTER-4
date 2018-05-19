/*AIM: Hybrid Inheritance and Diamond Problem*/
/*Time: Sat 19 May 2018 04:15:23 PM IST */
#include<iostream>
using namespace std;

class base{
/*We assign var in 'protected', because we need 'var' in all our derived classes. To avoid making another function 'get_var()', and calling the function in every class, we can better assign 'var' in protected mode, so that every derived class can access it.*/
    protected:
        int var;
};
class derived1: public virtual base{
    public:
        derived1()
        {
            var=2;
        }
        void display()
        {
            cout<<"We are in derived1 class. Var is "<<var<<endl;
        }
};
class derived2: virtual public base{
    public:
        derived2()
        {
            var=3;
        }
        void display()
        {
            cout<<"We are in derived2 class. Var is "<<var<<endl;
        }
};
class derived3: public derived1, public derived2 
/*2 possible cases:
    Case 1: class derived3: public derived1, public derived2 {....}
    Case 2: class derived3: public derived2, public derived1 {....}
    In case 1, derived2 data will reflect into derived3.
    In case 2, derived1 data will reflect into derived3.*/
{
    public:
        void display()
        {
        /*if we donot use 'virtual' keyword, we get 'ambiguity error'*/
            cout<<"We are in derived3 class. Var is "<<var<<endl;
            derived1::display();
            derived2::display();
            /*If we donot use virtual keyword, then 'display()' of both the classes is inherited into class derived3. To avoid such copies into derived3, we use 'virtual' function. Only the data from the last class, as defined in the declaration of dervied3 will be made avalable.*/
        }
};

int main ()
{
    derived3 d;
    d.display();
    return 0;
}
/*
If we don't use 'virtual' we get the following output for 
            derived1::display();
            derived2::display();
We are in derived1 class. Var is 2
We are in derived2 class. Var is 3
*/
/*OUTPUT
We are in derived3 class. Var is 3
We are in derived1 class. Var is 3
We are in derived2 class. Var is 3
*/
