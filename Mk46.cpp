#include <iostream>
#include <string>
using namespace std;

// Classes are an extension to structures
// Limitations of structures :
//    --> All Memebers were public
//    --> No methods
// YOu cab declare objects along with class declaration
/*   class classname{
          class content;
    }object1,objject2,......;  */
//  Object1, object2 are declared

// Nesting of Member Functions
class binary
{
    // By default the members of a class are private
    string s;
    void ones(void);

public:
    void read(void);
    void chk_bin(void);
    
};

void binary::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}
void binary::chk_bin(void)
{

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect Binary Format" << endl; 

            exit(0);
        }
    }

    cout << "Correct Binary Format" << endl;

    // Nesting of member function
    // Refers to calling a function inside a function, where both the functions are  defined inside the same class.
    ones();
    
}

void binary::ones(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '0')
        {
            s[i] = '1';
        }
        else if (s[i] == '1')
        {
            s[i] = '0';
        }
    }
    cout << "1's complement of the binary number is " << s << endl;
}

int main()
{
    binary b;
    b.read();
    b.chk_bin();

    // b.ones();
    // ones() function has been called inside the chk_bin.
    //  if Ones function is private, then it cannot be called in main function, but can be called only by nesting into another function

    return 0;
}