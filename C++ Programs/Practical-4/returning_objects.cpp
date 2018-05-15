/*AIM: Returning Object in a function argument*/
/*Time: Tue 15 May 2018 03:59:04 PM IST  */
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
        Complex add(Complex);
        
        void display()
        {
            cout<<"Complex Number: "<<real<<" + "<<imag<<"i"<<endl;
        }
};

Complex Complex::add(Complex a)
{
    Complex temp;
    temp.real=real+a.real;
    temp.imag=imag+a.imag;     
    return (temp);       
}

int main ()
{
    Complex c1,c2,c3;
    c1.get_values(1,2);
    c2.get_values(3,4);
    
    c1.display();
    c2.display();
    
    c3=c1.add(c2);
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
