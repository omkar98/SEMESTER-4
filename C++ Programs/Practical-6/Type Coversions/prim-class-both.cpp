/*AIM: Primitive Basic Type to Class Type Conversion*/
/*Time: Thu 17 May 2018 05:22:21 PM IST */
/*Basics: 
1) There are two types of Data, namely Primitive Basic Type(int/float/) and non Primitive Data Types(Class/Structure Type)
2) Primitive to Class Type Conversion can be implemented using a Constructor
2) Class to Primitive Type Conversion can be implemented using a Casting Operator*/
#include<iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex()
        {
            real=0;
            imag=0;
        }
        Complex(int k,int l=0)
        {
            real=k;
            imag=l;//if we do not declare imag=0 here, we get garbage value in imag.
        }
        
        /*This function below is called typecasting operator. The data-type which is to be returned, should be written after the keyword 'operator'*/
        operator int() 
        {
            return(real);
        }
        
        void display(void)
        {
            cout<<"real = "<<real<<" imag = "<<imag<<endl;
        }
};

int main ()
{
    Complex c1,c2(6,5);
    c1.display();
    int x=5;
    /*The statement below is similar to working of c1.Complex(x). However c1.Complex(x) is syntactically incorrect.*/
    c1=x;//Primitive to Class Type
    cout<<"Converting Primitive to Class Type, i.e c1 = x, where x = 5 :"<<endl;
    c1.display();
    /*The statement below is similar to working of c1.operator int(). However c1.operator int() is syntactically incorrect.*/
    
    cout<<"c2 Class type has following data stored."<<endl;
    c2.display();
    cout<<"Value of x initially : "<<x<<endl;
    x=c2;//Primitive to Class Type
    /*This is similar to typecasting syntax. Typecasting example is int(variable)
    int x=5;
    float y;
    y=float(x);
    */
    cout<<"Converting Class to Primitive Type, i.e x = c1, where c1's real part is stored in x, (real part of c2 has value '6') :"<<endl;
    c2.display();
    cout<<"Value of x now: "<<x<<endl;
    return 0;
}
/*real = 0 imag = 0
Converting Primitive to Class Type, i.e c1 = x, where x = 5 :
real = 5 imag = 0
c2 Class type has following data stored.
real = 6 imag = 5
Value of x initially : 5
Converting Class to Primitive Type, i.e x = c1, where c1's real part is stored in x, (real part of c2 has value '6') :
real = 6 imag = 5
Value of x now: 6
*/
