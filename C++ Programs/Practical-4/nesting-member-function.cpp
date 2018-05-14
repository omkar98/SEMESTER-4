/*AIM: Nesting Member Functions*/
/*Time: Mon 14 May 2018 02:10:07 PM IST */
#include<iostream>
using namespace std;

class Area
{
    private:
        int radius;
        float area;
    public:
        void get_number(int x)
        {
            radius=x;
        }        
        float find_area(void)
        {
            area=3.142*radius*radius;
            return (area);
        }
        void display(void)
        {
            /*Here the find_area() is called within this function.*/
            cout<<"Calculated Area is : "<<find_area()<<endl;
            /*The function which we call can have a return type.*/
        }
};
int main ()
{
    Area A1;
    A1.get_number(10);
    A1.display();
    return 0;
}

/*
Calculated Area is : 314.2
*/
