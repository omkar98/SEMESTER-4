/*AIM: Classes and Objects*/
/*Time: Mon 14 May 2018 01:35:29 PM IST */
#include<iostream>
using namespace std;
/* Good Practice to write the first letter of the name of the class in caps.*/
class Employee{  
/*Access Modifier: 3 types: Private, Protected & Public
Used for: Data Hiding in C++
*/
    private: 
        char name[10];
        int age;
        float salary;
    public:
        void Get_Name(void)
        {
            cout<<"\nEnter Name: "<<endl;
            cin>>name;
        }
        void Get_Age(void)
        {
            cout<<"\nEnter Age: "<<endl;
            cin>>age;
        }
        void Get_Salary(void)
        {
            cout<<"\nEnter Salary: "<<endl;
            cin>>salary;
        }
        void Show_Details(void)
        {
            cout<<"\nName: "<<name<<"\nAge: "<<age<<"\nSalary: "<<salary<<endl;
        }    
};
       
int main ()
{
    Employee emp1; // Object
    /*An Object is an instance of a Class. When a class is defined, no memory is allocated but when it is instantiated (i.e. an object is created) memory is allocated.*/
    emp1.Get_Name();
    emp1.Get_Age();
    emp1.Get_Salary();
    emp1.Show_Details();
    /* emp1.age=22; - Compile Time Error - We cannot access the private data member directly*/
    return 0;
}

/*
OUTPUT
Enter Name: 
Omkar

Enter Age: 
22

Enter Salary: 
50000

Name: Omkar
Age: 22
Salary: 50000
*/

/*Protected: Protected access modifier is similar to that of private access modifiers, the difference is that the class member declared as Protected are inaccessible outside the class but they can be accessed by any subclass(derived class) of that class.*/
