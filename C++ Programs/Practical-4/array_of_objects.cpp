/*AIM: Array of Objects. */
/*Time: Tue 15 May 2018 03:08:39 PM IST */
#include<iostream>
using namespace std;

class Employee{
    private:
        char name[30];
        int ID;
        float salary;
    public:
    void get_details()
    {
        cout<<"Enter Name, ID and salary of employee: "<<endl;
        cin>>name>>ID>>salary;
    }
    void put_details()
    {
        cout<<name<<" | "<<ID<<" | "<<salary<<endl;
    }
};

int main ()
{
    Employee emp[10]; // Array of 10 objects can be created.
    cout<<"Enter number of Employees: "<<endl;
    int req;
    cin>>req;
    for(int i=0;i<req;i++)
    {
        emp[i].get_details();
    }
    for(int i=0;i<req;i++)
    {
        emp[i].put_details();
    }   
    return 0;
}

/*OUTPUT
Enter number of Employees: 
3
Enter Name, ID and salary of employee: 
Omkar 25 50000
Enter Name, ID and salary of employee: 
Govinda 41 55000
Enter Name, ID and salary of employee: 
Anuj 22 60000
Omkar | 25 | 50000
Govinda | 41 | 55000
Anuj | 22 | 60000
*/
