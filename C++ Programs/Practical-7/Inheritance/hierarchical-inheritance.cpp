/*AIM: Hierarchical Inheritance*/
/*Time: Sat 19 May 2018 05:38:32 PM IST */
#include<iostream>
using namespace std;

class Comman{
    private:
        char Name[30];
        char Gender[30];
        int Age;
    public:
        void get_data()
        {
            cout<<"\nEnter Name, Gender and Age: "<<endl;
            cin>>Name>>Gender>>Age;
        }
        void display()
        {
            cout<<"Details:\n"<<"\tName: "<<Name<<"\n\tGender: "<<Gender<<"\n\tage: "<<Age<<endl;
        }
};

class Teacher:public Comman {
    private:
        char Subject[30];
        int Salary;
    public:
        void get_data()
        {
            Comman::get_data();
            cout<<"\nEnter Subject and Salary: "<<endl;
            cin>>Subject>>Salary;
        }
        void display()
        {
            Comman::display();
            cout<<"\n\tSubject: "<<Subject<<"\n\tSalary: "<<Salary<<endl;
        }
};

class Student:public Comman{
    private:
        int Rank;
        float Results;
    public:
        void get_data()
        {
            Comman::get_data();
            cout<<"\nEnter Rank and Results: "<<endl;
            cin>>Rank>>Results;
        }
        void display()
        {
            Comman::display();
            cout<<"\n\tRank: "<<Rank<<"\n\tResults: "<<Results<<endl;
        }
};

int main ()
{
    Teacher t1;
    t1.get_data();
    cout<<"Teacher:"<<endl;
    t1.display();
    
    Student s1;
    cout<<"Student:"<<endl;
    s1.get_data();
    s1.display();
    return 0;
}

/*
OUTPUT
Enter Name, Gender and Age: 
Omkar
Male
22

Enter Subject and Salary: 
Computers
50000
Teacher:
Details:
	Name: Omkar
	Gender: Male
	age: 22

	Subject: Computers
	Salary: 50000
Student:

Enter Name, Gender and Age: 
Ruchitha
Female
24

Enter Rank and Results: 
3
97
Details:
	Name: Ruchitha
	Gender: Female
	age: 24

	Rank: 3
	Results: 97

*/
