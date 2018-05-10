/*AIM: Typecasting Operation in C++*/
/*Time: Tue 08 May 2018 07:12:08 PM IST */
#include<iostream>
using namespace std;

int main ()
{
    int a=5;
    int b=10;
    //This divides int/int, and gives an int value 0, which is converted to float '0'.
    float c = (float)(a/b);
    //Both of these ways are possible. However the first isn't supported by many compilers.
    float d = float(a)/b;//This converts the 'a' into float, and float/int gives floating point in CPP. This is usually used in C, rather than CPP.
    float e = (float)a/b;//This converts the 'a' into float, and float/int gives floating point in CPP. This is standard in CPP.
    cout<<"(float)(a/b): "<<c<<endl;
    cout<<"float(a)/b: "<<d<<endl;
    cout<<"(float)a/b: "<<e<<endl;
    return 0;
}

/*
OUTPUT:
(float)(a/b): 0
float(a)/b: 0.5
(float)a/b: 0.5
*/
