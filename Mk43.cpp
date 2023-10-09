#include<iostream>
using namespace std;

// Function Overloading

// You can name 2 functions with the same name ,but with different arguments
// the compiler will itself sort them out

int product(int a, int b){

    cout<<"\nBY 2 arguments"<<endl;
    return a*b;
}
char product(int a, char b){

    cout<<"\nBY ineresting arguments"<<endl;
    cout<<"Entered integer was"<<a<<endl;
    return b;
}

int product(int a, int b,int c){
    cout<<"\nBy 3 arguments"<<endl;
    
    return a*b*c;
}

int main(){
    cout<<product(2,3);
    cout<<product(4,5,6);
    cout<<product(12,'d');
    // cout<<product(1,2,3,4);
    return 0;
}