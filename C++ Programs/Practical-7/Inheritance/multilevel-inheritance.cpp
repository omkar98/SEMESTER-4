/*AIM: Implementing Multi-level Inheritance*/
/*Time: Sat 19 May 2018 03:38:01 PM IST */
#include<iostream>
using namespace std;

class Person{
    private:
        const char *Name;
        const char *Gender;
        int Age;
    public:
        void getdata(const char *name="Unknown", const char *gender="Unknown", int age = 0)
        {
            Name=name;
            Gender=gender;
            Age=age;
        }
        void display()
        {
            cout<<"Name = "<<Name<<endl;
            cout<<"Gender = "<<Gender<<endl;
            cout<<"Age = "<<Age<<endl;
        }
};

class Employee: public Person
{
    private:
        const char *Company;
        int Salary;
    public:
        void getdata(const char *company="Unknown", int salary = 0)
        {
            Person::getdata("Omkar", "Male",22);
            Company=company;
            Salary=salary;
        }
        void display()
        {
            Person::display();
            cout<<"Company = "<<Company<<endl;
            cout<<"Salary= "<<Salary<<endl;
        }
};
class Programmer: public Employee
{
    private:
        const char *Lang;
        int Experience;
    public:
        void getdata(const char *lang="Unknown", int experience = 0)
        {
            
            Employee::getdata("GOOGLE Inc.", 50000);            
            Lang=lang;
            Experience=experience;
        }
        void display()
        {
            Employee::display();
            cout<<"Languages Known = "<<Lang<<endl;
            cout<<"Experience= "<<Experience<<endl;
        }
};

int main ()
{
    Programmer p1,p2;
    p1.getdata("C, C++, Java and Python", 3);
    p1.display();
    return 0;
}
/*
Name = Omkar
Gender = Male
Age = 22
Company = GOOGLE Inc.
Salary= 50000
Languages Known = C, C++, Java and Python
Experience= 3
*/
