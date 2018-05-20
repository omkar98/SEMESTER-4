/*AIM: Nesting of Classes(or Containership)*/
/*Basic Info: An object can be a collection of many other objects. When a class contains objects of another class, it is called containership. It need not be necessary that the 'another class' is declared within the class. It can also be declared outside of the class, and its object can be declared into any other class. This is called Containership.
Nesting: When one class is defined within another class, and the class objects are used within the 'same class ' in which it is declared, then it is called Nesting. */
/*Time: Sun 20 May 2018 04:06:35 PM IST */
#include<iostream>
#include<cstring>
#pragma GCC diagnostic ignored "-Wwrite-strings"
using namespace std;

class Student{
    private:
   /*String Declaration:
   In C, when we pass a constant string in a function, we catch it in the form of char* 
    Example:
        char Name[30];
        func(char *name)
        {
            printf("You entered %s", name);
            ...
        }
        int main()
        {
            func("Omkar");
        }
        
   In C++, the above code shows warning:
   [Warning]deprecated conversion from string constant to ‘char*’ [-Wwrite-strings]
    char* pointer_to_nonconst = "string literal"; // Illegal
    const char* pointer_to_nonconst = "string literal";//Legal
 */
        char Name[30]; //Correct way is: const char *Name
        int Age;
        /*Since address has many parameters, hence we group them in a single class. This class 'address', will only come into exixtence, when an object of student is created. */
        class Address{
            private:
                int HNo;
                /* Correct way to declare constant strings in C++: 
                const char *street;
                const char *city;
                const char *state;
                const char *country;
                const char *pincode;*/
                
                char street[30];
                char city[30];
                char state[30];
                char country[30];
                char pincode[30];
            public:
                /*void get_data(int h, const char *s, const char *c, const char *st, const char *cou, const char* pc)*/
                void get_data(int h,char *s,char *c,char *st,char *cou,char* pc)
                {
                     HNo=h;
                     strcpy(street,s);
                     strcpy(city,c);
                     strcpy(state,st);
                     strcpy(country,cou);
                     strcpy(pincode,pc);              
                }
                void show_data()
                {
                     cout<<"\n\tHNo: "<< HNo;
                     cout<<"\n\tstreet: "<< street;
                     cout<<"\n\tcity: "<< city;
                     cout<<"\n\tstate: "<< state;
                     cout<<"\n\tcountry: "<< country;
                     cout<<"\n\tpincode: "<< pincode<<endl;         
                }
        };
        Address add;
    public:
        void get_data(char *name, int age)
        {
            strcpy(Name, name);
            Age=age;
            add.get_data(27,"Vrindhavan Colony","Nanded", "Maharashtra", "INDIA", "431602");
        }
        void show_data()
        {
            cout<<"Details are: "<<endl;
            cout<<"\tName: "<<Name;
            cout<<"\n\tAge: "<<Age;
            add.show_data();
        }
};

int main ()
{
    Student s;
    s.get_data("Omkar", 22);
    s.show_data();
    return 0;
}
/*OUTPUT
Details are: 
	Name: Omkar
	Age: 22
	HNo: 27
	street: Vrindhavan Colony
	city: Nanded
	state: Maharashtra
	country: INDIA
	pincode: 431602
*/
