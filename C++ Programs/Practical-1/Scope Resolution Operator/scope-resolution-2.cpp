/*Omkar Deshpande | EB37397 */
/*AIM: Study of Scope Resolution Operator in C++*/
/*Main purpose is to bring a varible or a function within its own scope.*/
/*(b) To define a function wich lies outside the class.*/

#include<iostream>
using namespace std;

class test
{
    private:
        int b;
    public: 
        void get_data(int);
};
void test:: get_data(int x)
{
    b=x;
    cout<<"B is: "<<b<<endl;
}

int main()
{
    test t1;
    t1.get_data(25);
    return 0;
}

/*
omkar@ubuntu:~/Desktop/omkar25$ gedit scope-resolution-2.cpp
omkar@ubuntu:~/Desktop/omkar25$ g++ scope-resolution-2.cpp
omkar@ubuntu:~/Desktop/omkar25$ ./a.out
B is: 25
*/




