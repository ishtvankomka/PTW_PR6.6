#include <iostream>
#include <iomanip>
#include "Elem.h"
using namespace std;

int main()
{
    Elem* first = NULL,
        * last = NULL;

    int n;
    string sname, num;

    cout << "Number of abonents: "; cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << endl;
        cout << "Surname: "; cin >> sname;
        cout << "Phone number: "; cin >> num;
        enqueue(first, last, sname, num);
    }

    Print(first);
    cout << endl;
    cout << "Surname: "; cin >> sname;
    cout << "Phone number: "; cin >> num;
    cout << endl;
    
    if (Check(first, sname, num))
        cout << "Abonent exist" << endl;
    else
        cout << "Abonent not exist" << endl;

    return 0;
}
