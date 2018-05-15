/*AIM: A function from one class declared in another class, as a friend function.*/
/*Time: Tue 15 May 2018 04:43:34 PM IST */
#include<iostream>
using namespace std;
class SECSE2;


class SECSE1
{
    private:
        int stud1;
        float res1;
    public:
        void input1(int x, float y)
        {
            stud1=x;
            res1=y;
        }
        void CR(SECSE2);
        void show1()
        {
            cout<<"Student Roll No: "<<stud1<<"\nStudent Result: "<<res1<<endl;
        }
};


class SECSE2
{
    private:
        int stud2;
        float res2;
    public:
        friend void SECSE1::CR(SECSE2); 
        void input2(int x, float y)
        {
            stud2=x;
            res2=y;
        }
        void show2()
        {
            cout<<"Student Roll No: "<<stud2<<"\nStudent Result: "<<res2<<endl;
        }
};
/*We declare this outside of class because the compiler gives 'forward declaration' type error. This is because the time when class SECSE1 is being scanned, it doesnot know what is the object 's'.*/
void SECSE1::CR(SECSE2 s)
{
      cout<<"Student Roll No: "<<s.stud2<<"\nStudent Result: "<<s.res2<<endl;
}

int main ()
{
    SECSE1 s1;
    SECSE2 s2;
    s1.input1(25,75);
    s1.show1();
    s2.input2(36,95);
    s2.show2();
    s1.CR(s2);
    return 0;
}
