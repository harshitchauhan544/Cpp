#include<iostream>
using namespace std;

// Static Functions
// A function to access static members only
// These functions can be called without declaring a object

class employee
{
    int id;
   
    static int count;
     
    
public:
    void setdata(void)
    {
        cout << "\nenter id :";
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "The id is : ";
        cout << id << " employee no. is " << count;
    }

    // Declaring  the static function 
    static void getcount(void){
        cout<<"The value of count is :"<<count;

        // You  cannot call a non static variable or function in it
        // e.g int id cannot be called here
        // or the getdata(), setdata() function
    }
};

int employee::count;

int main()
{
    employee raj, ss, mj;
    raj.setdata();
    raj.getdata();

    ss.setdata();
    ss.getdata();

    mj.setdata();
    mj.getdata();

    // Calling a static function withouut using a Object
    employee::getcount();

    return 0;
}