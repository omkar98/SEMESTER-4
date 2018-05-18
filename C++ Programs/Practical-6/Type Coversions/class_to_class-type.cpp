/*AIM:Class to Class Type conversion */
/*Time: Thu 17 May 2018 06:56:47 PM IST */
/* Basic Info:
1) This type of convesion is done, when an object of one class needs the data of object of another class. 
2) If both the objects belong to same class, then we can use assignment operator or copy constructor. By default, the complier provides a copy constructor.
3) However, if both objects belong to different classes, we can copy data from one objec to another using:
    a) Constructor
    b) Operator Typecasting
*/
#include<iostream>
using namespace std;
class Product{
    private:
        int a;
        int b;
    public:
        Product(int x=0, int y=0)
        {
            a=x;
            b=y;
        }
                
        int get_a()
        {
            return a;
        }
        int get_b()
        {
            return b;
        }
        void display()
        {
            cout<<" a = "<<a<<" b = "<<b<<endl;
        }
};

class Item{
    private:
        int m; 
        int n;
    public:
        Item()
        {
            m=0;
            n=0;
        }
        Item(Product p)
        {
            /*m=p.a; Not accessible
            n=p.b; Because a and b are private members.*/
            m=p.get_a();
            n=p.get_b();
        }
        void display()
        {
            cout<<" m = "<<m<<" n = "<<n<<endl;
        }
};

int main ()
{
    Item i1;
    Product p1(5,6);
    cout<<"Initial values of item: "<<endl;
    i1.display();
    
    cout<<"Initial values of product: "<<endl;
    p1.display();
    
    i1=p1; // This is by using constructor : i1.Item(p1)
    
    cout<<"Now values of item: "<<endl;
    i1.display();
    
    cout<<"Now values of product: "<<endl;
    p1.display();
    return 0;
}
/*
Initial values of item: 
 m = 0 n = 0
Initial values of product: 
 a = 5 b = 6
Now values of item: 
 m = 5 n = 6
Now values of product: 
 a = 5 b = 6
*/


