/*AIM: Default Arguments*/
/*Time: Fri 11 May 2018 06:40:02 AM IST */
#include<iostream>
using namespace std;

void sum(int, int, int=0, int=0);
// void sum(int, int, int=0, int);  Invalid
//The default parameters must be placed from rightmost variable.
int count=1;

int main ()
{
    sum(2,3); // Neccessary to pass atleast 2 arguments.
    sum(2,3,4);
    sum(2,3,4,5);
    return 0;
}

/*If the default argument is already specified in the function prototype(declaration), then it shouldn't be again specified below, in function definition*/
void sum(int x, int y, int z, int w)
{
    int sum=x+y+z+w;
    cout<<"("<<count<<")"<<"Sum = "<<sum<<endl;
    count++;
}

/*(1)Sum = 5
(2)Sum = 9
(3)Sum = 14
*/
