/*Omkar Deshpande | EB37397 */
/*AIM: Study of Scope Resolution Operator in C++*/
/*(a) Scope resolution operator is used to access a globally declared variable, if the same variable name is also declared locally.*/

#include<iostream>
using namespace std;

int x=0;
int main()
{
    int x=1;
    cout<<"Accessing local X: "<<x<<endl;
    cout<<"Accessing global X: "<<::x<<endl;
    return 0;
}

/*
omkar@ubuntu:~/Desktop/omkar25$ ./a.out
Accessing local X: 1
Accessing global X: 0
*/



