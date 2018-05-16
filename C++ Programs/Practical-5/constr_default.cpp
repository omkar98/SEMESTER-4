/*AIM: To show that the constructor initializes an object implicitly, even if there is no user defined constructor used.*/
/*Time: Wed 16 May 2018 02:31:24 PM IST */
#include<iostream>
using namespace std;

class sample
{
    private:
        int a;
        int b;
    public:
        int c;
        void show(void)
        {
            cout<<" a = "<<a<<" | b = "<<b<<endl;
        }
};
/*By default a default constructor initializes all the values within the object as zero. */
int main ()
{
    sample s1;
    cout<<"The compiler has called a default constructor."<<endl;
    cout<<"The object has been initalized as follows:"<<endl;
    s1.show();
    cout<<"Value of c is: "<<s1.c<<endl;
    return 0;
}

/*
OBSERVATION 1: When there was no public variable declared, then the following was the output:
The compiler has called a default constructor.
The object has been initalized as follows:
 a = 1709722304 | b = 32764
 
 OBSERVATION 2: But when a variable was declared inside public (here int c), then the following was the output:
 The compiler has called a default constructor.
The object has been initalized as follows:
 a = 0 | b = 0
Value of c is: 0

Few Hints to this solution can be observed here at :
https://stackoverflow.com/questions/2417065/does-the-default-constructor-initialize-built-in-types
*/
