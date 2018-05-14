/*AIM: Private Member Function*/
/*Time: Mon 14 May 2018 02:53:54 PM IST */
#include<iostream>
using namespace std;

class student{
    private:
        int rn;
        float marks;
        void set_data(int x, float y)
        {
            rn=x;
            marks=y;
        }
    public:
        void initialize(int x1, float y1)
        {
            set_data(x1,y1);
        }
        void display()
        {
            cout<<"rn = "<<rn<<" marks = "<<marks<<endl;
        }
};


int main ()
{
    student s1;
    s1.initialize(25,77.8);
    //s1.set_data(25,77.8); Invalid - Cannot access private data member.
    //s1.rn=25; // Invalid - Cannot access private data member.
    s1.display();    
    return 0;
}

/* OUTPUT
rn = 25 marks = 77.8
*/
