/*AIM: Momory Allocation for Objects*/
/*Time: Mon 14 May 2018 04:51:18 PM IST */
#include<iostream>
using namespace std;

class Employee{
    private:
        int id;
        float salary;
    public:
        void get_id(void)
        {
            cout<<"Enter Id: "<<endl;
            cin>>id;
        }
        void get_salary(void)
        {
            cout<<"Enter Salary: "<<endl;
            cin>>salary;    
        }
        void display(int num)
        {
              cout<<"ID: "<<id<<" | Salary: "<<salary<<endl;      
        }
};

int main ()
{
    cout<<"Enter the number of employees: "<<endl;
    int num;
    cin>>num;
    /*Here we allocate memory for object at the runtime.*/
    Employee *array = new Employee[num];
    int i;
    for(i=0;i<num;i++)
    {
      array[i].get_id();
      array[i].get_salary();
    }
    for(i=0;i<num;i++)
    {
       array[i].display(num);
    }        
    return 0;
}
/*OUTPUT
Enter the number of employees: 
3
Enter Id: 
25
Enter Salary: 
3000
Enter Id: 
26
Enter Salary: 
4000
Enter Id: 
27
Enter Salary: 
5000
ID: 25 | Salary: 3000
ID: 26 | Salary: 4000
ID: 27 | Salary: 5000
*/
