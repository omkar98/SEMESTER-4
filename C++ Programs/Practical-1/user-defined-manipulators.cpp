/*AIM: User-defined Manipulators*/
/*Time: Wed 09 May 2018 07:03:01 AM IST */
#include<iostream>
#include<iomanip>

using namespace std;

/*Here INR, Dollar and Get_price is the name of the manipulator defined by the user.
ostream & and istream & is the manipulator called with respect to the reference
output and input is the stream cascading object.*/
ostream & INR (ostream & output)
{
    cout<<"Rs. ";
    return output;
}
ostream & Dollar (ostream & output)
{
    cout<<"$ ";
    return output;
}
istream & Get_price(istream & input)
{
    cout<<"Enter the price: ";
    return input;
}


int main ()
{
    float price;
    cin>>Get_price>>price;
    cout<<INR<<price<<endl;
    cout<<Dollar<<price<<endl;
    return 0;
}

/*
Enter the price: 25
Rs. 25
$ 25
*/

