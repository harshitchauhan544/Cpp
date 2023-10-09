#include <iostream>
using namespace std;

// Static Data Members
// Static Variables

class employee
{
    int id, count = 0;
    // count will loose as it jumps from one object to another

    // ***    static variable
    // To hold value of a variable among diferent objects, without losing data
    // Value in a variable is stored for a specific object, as move to a new object  the old values of the variables remains in the old object
    // Scope is inside the class
    // Lifetime is until the termination of program
    static int count1;
     
     // You cannot initialize it with some value inside a class
     // e.g static int count =12;
     // will give error

public:
    void setdata(void)
    {
        cout << "\nenter id :";
        cin >> id;
        count1++;
    }
    void getdata(void)
    {
        cout << "The id is:";
        cout << id << " employee no. is " << count1;
    }
};

// redeclaring the static variable
// for memory allocation
// as no memory is allocated to  the elements of a class
// memory is allocated when a object  is created while keeping the class as a template
int employee::count1;
// default value of a static int is "zero"
// You can initialise it to any value here
// e.g. int employee::count1 = 1000;
// will innitialize it to 1000

int main()
{
    employee raj, ss, mj;
    raj.setdata();
    raj.getdata();

    ss.setdata();
    ss.getdata();

    mj.setdata();
    mj.getdata();

    return 0;
}