/*AIM: Single Inheritance using Private Mode
Program: Addition of 2 numbers*/
/*Time: Fri 18 May 2018 04:26:27 PM IST  */
#include<iostream>
using namespace std;

class A{
    private:
        int m;
        int n;
    public:
        void get_data(int a=0, int b=0)
        {
            m=a;
            n=b;
        }
        void display()
        {
            cout<<" m = "<<m<<" n = "<<n<<endl;   
        }
        /*We need to add m and n. But m and n are not the members of B. They are the members of A.Hence, we use a member function, defined in A, that returns m and n values in A.*/
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
The public members of A get inherited to private members under private mode*/
class B: A /*By default, A gets private visibility mode*/
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
    /*We need to add m and n. But m and n are not the members of B. They are the members of A. Hence, we use a member function, defined in A, that returns m and n values of A. But these member functions are private members of B. hence we use this add() to call all those functions defined under private label in B. */
    get_data(7,8);
    A::display(); //if we donot give membership label, the compiler calls the display() which is public(i.e Class B's display()) 
    sum = get_m()+get_n();
}

int main ()
{
    B b;
    b.add();
    //b.A::display();Object b cannot access a private member function directly from main. Hence we call the display function of A from add() defined in B.
    b.display();
    return 0;
}

/*
OUTPUT
 m = 7 n = 8
Obtained Sum is 15

*/
