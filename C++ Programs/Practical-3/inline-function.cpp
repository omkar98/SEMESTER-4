/*AIM: Inline Function*/
/*Time: Fri 11 May 2018 05:51:25 AM IST */

/*Theory
a) It is only useful to make the function inline if the time spent during a function call is more compared to the function body execution time.
b) Inline function is a function that is expanded in line when it is called. When the inline function is called whole code of the inline function gets inserted or substituted at the point of inline function call. This substitution is performed by the C++ compiler at compile time. Inline function may increase efficiency if it is small.
*/
#include<iostream>
using namespace std;

inline int square(int x)
{
    /* Compiler may not perform inlining in such circumstances:
    (a)loops 
    (b)Static variables 
    (c)Recursion
    (d)Switch or Goto statements */
    
    return (x*x);
    
}
inline int cube(int x)
{    
    return (x*x*x);   
}

/*Too much inlining can also reduce your instruction cache hit rate, thus reducing the speed of instruction fetch from that of cache memory to that of primary memory.*/

int main ()
{
    int num=5;
    cout<<"Square of "<<num<<" is : "<<square(num)<<endl;
    cout<<"Cube of "<<num<<" is : "<<cube(num)<<endl;
    return 0;
}

/*Output:
Square of 5 is : 25
Cube of 5 is : 125
*/
/* Inline in Class
(a) It is also possible to define the inline function inside the class. In fact, all the functions defined inside the class are implicitly inline.
(b) To explicitly declare inline function in the class, just declare the function inside the class and define it outside the class using inline keyword.*/

/*Remember:
(a) It is recommended to always use inline function instead of macro. According to Dr. Bjarne Stroustrup, macros are almost never necessary in C++ and they are error prone. There are some problems with the use of macros in C++. Also, macro cannot access private members of class.
(b)  C++ compiler cannot perform inlining if the function is virtual.
(c) An example where inline function has no effect at all:

    inline void show()
    {
        cout << "value of S = " << S << endl;
    }  

In general function which performs input output (I/O) operation shouldn’t be defined as inline because it spends a considerable amount of time. Technically inlining of show() function is of limited value because the amount of time the I/O statement will take far exceeds the overhead of a function call.
*/


