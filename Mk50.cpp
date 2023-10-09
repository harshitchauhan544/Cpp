#include <iostream>
using namespace std;

class employee
{
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter id :" << endl;
        cin >> id;
    }
    void getid()
    {
        cout << "The id is " << id << endl;
    }
};

int main()
{
    employee raj, ss, mj;
    raj.setid();
    raj.getid();

    // Consider the Number of employee is large
    // So we will make an array of objects and run a loop across it

    employee ts[3];
    for (int i = 0; i < 3; i++)
    {
        ts[i].setid();
        ts[i].getid();
    }
    return 0;
} 