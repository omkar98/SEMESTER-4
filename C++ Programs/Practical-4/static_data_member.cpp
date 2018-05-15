/*AIM: Static Data Member*/
/*Time: Tue 15 May 2018 02:09:56 PM IST */
#include<iostream>
using namespace std;

/*Static members are 'only declared' in class declaration, not defined. They must be explicitly defined outside the class using scope resolution operator. If we try to access static member ‘count’ without explicit definition of it, we will get compilation error*/

class A
{
    private:
    /*If static variable is declared under 'private', then they become inaccessible, when called without creating any object. However they can be accessed using member functions.*/
    //static int count;
        int a;
    public:
    /*static members are shared among all objects. That is why they are also known as class members or class fields. */
        static int count;
        //We cannot initialize the static variable within the class definition.
        void get_a(int x)
        {
            a=x;
            /*The count is incremented, each time we create an object.*/
            count++;
        }
        void show()
        {
            cout<<"a="<<a<<"count="<<count<<endl;
        }
};
/*Unless initialized, by default the static varible is initialized to zero.*/
int A::count; // Definition of static variable 'count'
/*If we don't define static variable explicitly here, we get 'compilation error'*/

int main ()
{
    A a1,a2,a3;
    a1.get_a(5);
    a1.show();
    a2.get_a(10);
    a2.show();
    a3.get_a(15);
    a3.show();
    cout<<"Here, static variable can also be accessed without using any object. \nCount="<<A::count<<endl;
    return 0;
}

/*OUTPUT
a=5count=1
a=10count=2
a=15count=3
Here, static variable can also be accessed without using any object. 
Count=3
*/
