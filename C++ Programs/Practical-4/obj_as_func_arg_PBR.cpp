/*AIM: (b)Passing Object as function argument using the Pass-by-Reference concept.*/
/*Time: Tue 15 May 2018 03:29:50 PM IST */
#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        void get_values(int x, int y)
        {
            real=x;
            imag=y;
        }
        /*Here we are just changing our reference and referring the same memory locations with another variable names.*/
        void add(Complex &a, Complex &b)
        {
            real=a.real+b.real;
            imag=a.imag+b.imag;            
        }
        void display()
        {
            cout<<"Complex Number: "<<real<<" + "<<imag<<"i"<<endl;
        }
};

int main ()
{
    Complex c1,c2,c3;
    c1.get_values(1,2);
    c2.get_values(3,4);
    
    c1.display();
    c2.display();
    
    c3.add(c1,c2);
    cout<<"Resultant: "<<endl;
    c3.display();
    return 0;
}

/*OUTPUT
Complex Number: 1 + 2i
Complex Number: 3 + 4i
Resultant: 
Complex Number: 4 + 6i
*/
