/*AIM: Single Inheritance using Public Mode
Program: Addition of 2 numbers*/
/*Time: Fri 18 May 2018 03:49:11 PM IST */
#include<iostream>
using namespace std;

class A{
    private:
        int m;
        int n;
    public:
        /*A(int a=0, int b=0)
        {
            m=a;
            n=b;
        } There is no use of creating a constructor here, because we are not going to create an object of Class A, instead we will use Class B object.*/
        void get_data(int a=0, int b=0)
        {
            m=a;
            n=b;
        }
        void display()
        {
            cout<<" m = "<<m<<" n = "<<n<<endl;   
        }
        /*We need to add m and n. But m and n are not the members of B. They are the members of A.Hence, we use a member function, defined in A, that eturns m and n values of A.*/
        int get_m(void)
        {
            return m;
        }
        int get_n(void)
        {
            return n;
        }

};
/*The private members of A donot get inherited.
THe public members of A get inherited in the public mode*/
class B: public A
{
    private:
        int sum;
    public:
        B()
        {
            sum=0;
        }
        void add();
        /*there is a display() in parent class also.
        Here comes ambiguity issue. Hence we always use membership label.*/
        void display()
        {
            cout<<"Obtained Sum is "<<sum<<endl;
        }      
};

void B::add()
{
    /*We need to add m and n. But m and n are not the members of B. They are the members of A.Hence, we use a member function, defined in A, that eturns m and n values of A.*/
    sum = get_m()+get_n();
}

int main ()
{
    B b;
    b.get_data(5,6);
    b.A::display();//Since we want to use display function of A, we use membership label.
    b.add();
    b.B::display();
    return 0;
}

/*
OUTPUT
 m = 5 n = 6
Obtained Sum is 11
*/
