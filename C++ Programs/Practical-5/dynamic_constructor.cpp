/*AIM:Dynamic Constructor + Destructor*/
/*Time: Wed 16 May 2018 06:24:51 PM IST */
/*This program can be also be implemented, for 'Dynamic Initializatin of Objects'.*/

/*Dynamic constructor is used to allocate the memory to the objects at the run time.
Memory is allocated at run time with the help of 'new' operator.
By using this constructor, we can dynamically initialize the objects.*/

#include<iostream>
using namespace std;

class Dyn_con{
    private:
    /*Since, 'new' operator returns a pointer, hence we use a pointer in this program.*/
        int *ptr;
    public:
        Dyn_con()
        {
             ptr = new int;
            *ptr = 100; // This is not dynamic Initialization of value. Because, we directly assign '100' to *ptr.
        }
        Dyn_con(int x)
        {
             ptr = new int;
            *ptr = x; // Dynamically the value pointed by ptr is initialized.
        }
        /*The variables that are given constant values, get initialized to zero, after destruction. However, those which are dynamically initialized store garbage values after destruction. */
        
        void show()
        {
            cout<<"*ptr = "<<*ptr<<endl;
        }
        /*A destructor function is called automatically when the object goes out of scope:
(1) the function ends
(2) the program ends
(3) a block containing local variables ends
(4) a delete operator is called */
        
        ~Dyn_con()
        {
            delete ptr;
            cout<<"The *ptr has been deleted."<<endl;
            cout<<"*ptr = "<<*ptr<<endl;
        }
};

int main ()
{
    Dyn_con d1, d2(200);
    d1.show();
    d2.show();
    return 0;
}
/*
OUTPUT
*ptr = 100
*ptr = 200
The *ptr has been deleted.
*ptr = 0
The *ptr has been deleted.
*ptr = 30579760

*/
/*INTERVIEW QUESTIONS:
Can there be more than one destructor in a class?
No, there can only one destructor in a class with classname preceded by ~, no parameters and no return type.

When do we need to write a user-defined destructor?
If we do not write our own destructor in class, compiler creates a default destructor for us. The default destructor works fine unless we have dynamically allocated memory or pointer in class. When a class contains a pointer to memory allocated in class, we should write a destructor to release memory before the class instance is destroyed. This must be done to avoid memory leak.
*/
