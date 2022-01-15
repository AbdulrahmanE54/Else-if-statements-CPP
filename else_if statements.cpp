#include <iostream>

using namespace std;

int main ()
{
    string chosen = "";

    cout << "Do you want pizza? Y/N";
    cin >> chosen;

    if (chosen == "Y")
    {
        cout << "Here's pizza!";
    }
    else if (chosen == "idc")
    {
        cout << "Okay goodbye!";
    }
    else
    {
        cout << "Invalid choice!";
    }
    return 0;
}