/*AIM: Making a member function(declared outside the class) inline*/
/*Time: Mon 14 May 2018 02:34:07 PM IST */
#include<iostream>
using namespace std;

class Multiplier
{
    private: 
        float m;
    public:
        void get_multipler(float n)
        {
        /*Member functions declared inside the class are default inline.
        Hence we donot need to specify inline keyword.*/
            m=n;
            cout<<"Multipler has been set to "<<m;
        }
        float multiply(void);
};

/*Not just the member functions, but the 'inline' keyword is always written first preceding the return type.*/
inline float Multiplier::multiply(void)
{
    return m*m;
}

int main ()
{
    Multiplier m5;
    m5.get_multipler(11.3);
    float sol=m5.multiply();
    cout<<"\nSolution: "<<sol<<endl;
    return 0;
}

/*OUTPUT
Multipler has been set to 11.3
Solution: 127.69
*/
