/*AIM: Manipulators*/
/*Time: Wed 09 May 2018 06:29:11 AM IST */
#include<iostream>
#include<iomanip>
/*iomanip contains: setw(); setfill(); get_money(); put_money(); get_time(); put_time(); etc...*/
using namespace std;
/*Manipulators are used for formatting the output. They give a look, as the programmer wants the program to look like.*/

int main ()
{
    cout<<setfill(*)<<setw(10)<<"Engineer's Plot"<<endl;   
    /*Here setfill(), setw() and endl are manipulators, because we use them for formatting input output screen.*/
    return 0;
}
