#include<iostream>
using namespace std;

// OOPs
// We will controlling the flow of code in OOPS
// Works on concept of objects and classes

// Class -- It is template, to create objects
// i.e. it is a structure, whose look alikes would be objects.
// Variables Defined in a class do not consume any memory

//  Classes
// Objects
// Data Abstraction & Encapsulation -- Wrapping data and function into single Unit(class)
// Inheritance -- Properties of one class can be innherited to others
// Polymorphism -- ability to take more than one form
// Dynamic binding -- which part of the code will is not known until the program runs 
// Message Passing -- 


// Benefits of OOPs
// --> Better code reusability and inheritance
// --> Feature of Data hiding allows to increase security
// --> Multiple objects can co-exist without interference
// --> Software complexity can be easily managed.

// Classes over structure
// No data hiding in Structure(not safe)
// functions cannot be made inside a structure but classes allow


// Makinng our First class
class first
{
    private:
    int a,b,c; // can only accesed by functions inside this
    public:
    int d,e; // can be accessed anywhere
    void setData(int a1,int b1,int c1); // Declared only
    // Maybe defined later in the code
    void getData(){ // Implemnted on spot
        cout<<"a is "<<a<<endl;
        cout<<"b is "<<b<<endl;
        cout<<"c is "<<c<<endl;
        cout<<"d is "<<d<<endl;
        cout<<"e is "<<e<<endl;

    }
};

// Implementing the function declared inside in the function
void first :: setData(int a1,int b1,int c1){
    a=a1;
    b=b1;
    c=c1;

}

int main(){
    first harshit;

    // harshit.a=11; 
    // You cannot access variables in private class directly

    harshit.d=23;
    harshit.e=56;
    harshit.d=74;
    // d  and e can be accessed directly in the main function.

    harshit.setData(1,2,4);
    // Private variables can be accessed only by functions defined inside the Class.
    harshit.setData(23,98,11);
    
    harshit.getData();
    
    return 0;
}