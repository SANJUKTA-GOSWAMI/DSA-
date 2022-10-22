#include <iostream>
using namespace std;

// Destructors

int count = 0;
class num
{
public:
    num()
    {
        count++;
        cout << "This is the time when constructor is called for object number " << count << endl;
    }

    ~num()
    {
        count--;
        cout << "This is the time when my destructor is called  for object number " << count << endl;
    }
};

int main()
{

    cout << "We are inside our main function " << endl;
    cout << "Creating first object n1 " << endl;

    num n1;
    {
        cout << "Entering in  this block" << endl;
        cout << "Creating two more objects " << endl;

        num n2, n3;
        cout << "Exiting from this block " << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}
