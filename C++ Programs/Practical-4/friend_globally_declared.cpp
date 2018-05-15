/*AIM: Writing a Program to access private member of a class using a friend function declared Globally.*/
/*Time: Tue 15 May 2018 04:38:02 PM IST */
#include<iostream>
using namespace std;

class test{
    private:
        int a;
    public:
        void input(int);
        friend void add10(test);
        void show();
};
/*Since this is a member function of class test, hence we use :: operator to define it.*/
void test::input(int x)
{
    a=x;   
}
/*We need to pass object as argument while using a friend function, because the compiler will not know, which object has called the friend funcion.*/
void add10(test c)
{
    c.a+=10; // a=a+10; 
}
void test::show()
{
    cout<<"a = "<<a<<endl;
}

int main ()
{
    test t1;
    t1.input(5);
    add10(t1);
    t1.show();
    return 0;
}

/* OUTPUT
a = 5
*/
