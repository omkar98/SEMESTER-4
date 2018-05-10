/*AIM: Dynamic Memery Allocation in C++*/
/*Time: Tue 08 May 2018 07:00:23 AM IST */
#include<iostream>
using namespace std;

/*(a)Dynamically allocated memory is allocated on Heap and non-static and local variables get memory allocated on Stack.
(b) If programmer doesn’t deallocate memory, it causes memory leak (memory is not deallocated until program terminates).*/

int main ()
{
    cout<<"(a) Allocate memory for a data type"<<endl;
    int *ptr1;
    ptr1 = new int;
    /*What if enough memory is not available during runtime?
If enough memory is not available in the heap to allocate, the new request indicates failure by throwing an exception of type std::bad_alloc and new operator returns a pointer. Therefore, it may be good idea to check for the pointer variable produced by new before using it in program.*/
    if(!ptr1)
    {
        cout<<"Memory Allocation Failed"<<endl;
        return 0;
    }
    
    *ptr1=25;
    cout<<"*ptr1 = "<<*ptr1<<endl;
    delete ptr1;
    // delete function will deallocate memory assigned to ptr1. Now ptr1 can be used again in some other program.
    cout<<"(b) Initializing Memory"<<endl;
    float *ptr2; 
    ptr2 = new float(25.5);
    cout<<"*ptr2 = "<<*ptr2<<endl;
    delete ptr2;
    
    cout<<"(c) Allocate Block(array) of Memory"<<endl;
    ptr1 = new int[5];  // We don't declare ptr1, because we have already done that in (a).
    /*Dynamically allocates memory for 5 integers continuously of type int and returns pointer to the first element of the sequence, which is assigned to ptr. ptr[0] refers to first element, ptr[1] refers to second element and so on.*/
    int i;
    for(i=0;i<5;i++)
        ptr1[i]=i+5;
    for (i=0;i<5;i++)
    {
        cout<<"ptr1["<<i<<"] = "<<ptr1[i]<<endl;
        cout<<"Using Dereferencing concept: "<<endl;
        cout<<"*(ptr1 + "<<i<< ") = "<<*(ptr1+i)<<endl;
    }
    /*The most important difference is, normal arrays are deallocated by compiler (when function returns or completes). However, dynamically allocated arrays always remain there until either they are deallocated by programmer or program terminates.*/
    delete[] ptr1;
    return 0;
}

/*
(a) Allocate memory for a data type
*ptr1 = 25
(b) Initializing Memory
*ptr2 = 25.5
(c) Allocate Block(array) of Memory
ptr1[0] = 5
Using Dereferencing concept: 
*(ptr1 + 0) = 5
ptr1[1] = 6
Using Dereferencing concept: 
*(ptr1 + 1) = 6
ptr1[2] = 7
Using Dereferencing concept: 
*(ptr1 + 2) = 7
ptr1[3] = 8
Using Dereferencing concept: 
*(ptr1 + 3) = 8
ptr1[4] = 9
Using Dereferencing concept: 
*(ptr1 + 4) = 9
*/
