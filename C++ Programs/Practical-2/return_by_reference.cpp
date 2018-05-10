/*AIM: Returning by Reference*/
/*Time: Thu 10 May 2018 06:49:03 AM IST */
#include<iostream>
using namespace std;

/*For using return by Reference concept, we need to use variables that are globally declared. Because such variables are known to all those functions which will be using that variable.*/
int num; 

/*A C++ function can return a reference in a similar way as it returns a pointer. int& basically returns the reference of the variable 'num'. It actaully returns an 'implicit' pointer that points to the variable. */
int& get_variable()
{
   /* 
      int q;
      return q;  Compile Time Error: It is not legal to return a reference to local variable.
      static int x;
      return x;  Safe: We can always return a reference on a static variable because static variable also lives outside the function's scope.
      return 2; We cannot return a constant from the function. 
    */
    return num;
}


int main ()
{
    /*This way, a function can be used on the left side of an assignment statement. (Generally asked in interviews) */
    get_variable()=5;
    cout<<"Num is: "<<num<<endl;    
    return 0;
}

/*Output
Num is: 5
*/
