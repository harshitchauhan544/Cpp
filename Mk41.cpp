#include<iostream>
using namespace std;

// *******Recursions
// calling afunction inside itself

// Let us find ' factorial ' using recursions.......

int factorial(int n){         
    if(n<=1){                    // We are adding a condition here.
        return 1;                // So that the function knows where to stop..
    }
    return n* factorial(n-1);    // Here we are calling a function in itself....

    // steps followed by the computer.
    // factoria(4)=4 * factorail(3)
    // factorial(4) =4 * 3 * factorial(2)
    // factorial(4)= 4 * 3 * 2 * factorial(1)

    // For 1 we have made a special condtion that it is equal to 1, so that the computer does not go into negative values..

    // so, factorial(4) = 4 * 3* 2 * 1 .........
}
int main(){
    int b;
    cout<<"enter a number";
    cin>>b;
    cout<<"The factorial of that number is "<<factorial(b)<<endl; 

return 0;
}