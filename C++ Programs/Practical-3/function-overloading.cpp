/*AIM: Function Overloading*/
/*Time: Fri 11 May 2018 07:36:02 AM IST */
#include<iostream>
using namespace std;

/*void func(int, int);
void func(double, double);
void func(char*);*/
void func(int a, int b)
{
    cout<<a<<"\t"<<b<<endl;    
}

//void func(double a, double b)
void func(float a, float b)
{
    cout<<a<<"\t"<<b<<endl;
}
void func(const char c[])
{
    cout<<c<<endl;
}

int main ()
{
    func(2,5);
    /*As per the C++ Standard § 2.13.4:
    The type of a floating literal is double unless explicitly specified by a suffix. The suffixes f and F specify float, the suffixes l and L specify long double.
    */
    func(2.5f, 5.5f);
    /*If we write func(2.5, 5.5), without the suffix, then there comes an error: call of overloaded 'func' is ambiguous, because the compiler gets confused on whether to call the function with the int parameter, or the function with the float parameter. So, you get a an error saying it is ambiguous. Adding the f after a number makes it to a float.
*/
    
    func("Hello");
    return 0;
}
/*
2	5
2.5	5.5
Hello

*/


/*
The following overloaded functions are NOT allowed in C++
1) Function declarations that differ only in the return type

    int fun(int x, int y);
   void fun(int x, int y); 
2) Functions that differ only by static keyword in return type

          int fun(int x, int y);
   static int fun(int x, int y); 
3)Parameter declarations that differ only in a pointer * versus an array []

    int fun(int *ptr, int n);
    int fun(int ptr[], int n); 
4) Two parameter declarations that differ only in their default arguments

    int fun( int x, int y); 
    int fun( int x, int y = 10); 
*/
