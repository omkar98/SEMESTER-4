/*AIM: Array within Class*/
/*Time: Mon 14 May 2018 04:30:39 PM IST */
#include<iostream>
using namespace std;

const int SIZE=5;

class student{
    private:
        int rn;
        float marks[SIZE-1];
    public:
        void get_data(void);
        void show_data(void);
};
void student::get_data(void)
{
    cout<<"Roll No: "<<endl;
    cin>>rn;
    for(int i=0;i<SIZE;i++)
    {
        cout<<"Marks of Subject-"<<i+1<<": ";
        cin>>marks[i];
    }
}
void student::show_data(void)
{
    int sum=0;
    cout<<"\nReport of Roll No: "<<rn<<endl;
    for(int i=0;i<SIZE;i++)//In CPP it is a good practice to give brackets even if there are single line statements in loops and conditions.
    {
        cout<<"Marks of Subject-"<<i+1<<": "<<marks[i]<<endl;;
        sum+=marks[i];
    }
    cout<<"Sum: "<<sum<<endl;
}
int main ()
{
    student Omkar;
    Omkar.get_data();
    Omkar.show_data();
    return 0;
}

/*
OUTPUT
Roll No: 
25
Marks of Subject-1: 18
Marks of Subject-2: 18
Marks of Subject-3: 18
Marks of Subject-4: 15
Marks of Subject-5: 18

Report of Roll No: 25
Marks of Subject-1: 18
Marks of Subject-2: 18
Marks of Subject-3: 18
Marks of Subject-4: 15
Marks of Subject-5: 18
Sum: 87

*/
