/*AIM: Static Member Function: Counting the number of object created.*/
/*Time: Tue 15 May 2018 02:33:57 PM IST */
#include<iostream>
using namespace std;
/*In the previous example, we were not able to access a static variable outside of class when declared in private. 
We can now access it using the static member function.*/

class A{
    private:
        static int count;
        int count_non_static;
        int value;
    public:
        void get_value(int x)
        {
            value=x;
            count++;
            count_non_static=count;
        }
        void show_value()
        {
            cout<<"Object "<<count_non_static<<" | Value : "<<value<<endl;
        }
        static void show_count()
        {
            cout<<"Count: "<<A::count<<endl;
        }
};
int A::count;
int main ()
{
    A a1,a2,a3;
    a1.get_value(5);
    a1.show_count(); //We can also use object to call static member function.
    a2.get_value(10);
    A::show_count(); //Even without using any object, we can call static member function
    a3.get_value(15);
    A::show_count();
    
    a1.show_value();
    a2.show_value();
    a3.show_value();   
    
    cout<<"Total Object created are: "<<endl;
    A::show_count();
    /*Above, we haven't used any object to call show_count().*/
    return 0;
}

/*OUTPUT
Count: 1
Count: 2
Count: 3
Object 1 | Value : 5
Object 2 | Value : 10
Object 3 | Value : 15
Total Object created are: 
Count: 3
*/

/*
When we declare a member of a class as static it means no matter how many objects of the class are created, there is only one copy of the static member.

Important points about Static :

1) A static member is shared by all objects of the class, all static data is initialized to zero when the first object is created, if no other initialization is present.
2) A static member function can only access static data member, other static member functions and any other functions from outside the class.
3) By declaring a function member as static, we make it independent of any particular object of the class. A static member function can be called even if no objects of the class exist and the static functions are accessed using only the class name and the scope resolution operator :: .
4) We can’t put it in the class definition but it can be initialized outside the class as done in the following example by re-declaring the static variable, using the scope resolution operator :: to identify which class it belongs to.
*/
