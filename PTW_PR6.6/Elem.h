#include <iostream>
#include <iomanip>
using namespace std;
typedef string Data;

struct Elem
{
    Elem* next;
    Data surname, number;
};

void enqueue(Elem*& first, Elem*& last, Data s, Data n)
{
    Elem* tmp = new Elem;

    tmp->surname = s;
    tmp->number = n;
    tmp->next = NULL;
    if (last != NULL)
        last->next = tmp;
    last = tmp;
    if (first == NULL)
        first = tmp;
}

void Print(Elem* first)
{
    cout << "==============================" << endl;
    cout << "|  Surname  |  Phone number  |" << endl;
    cout << "==============================" << endl;

    while (first != NULL)
    {
        cout << "| " << setw(10) << left << first->surname << "| " << setw(15) << left << first->number << "|" << endl;
        first = first->next;
    }
    cout << "==============================" << endl;
}

bool Check(Elem* L, string s, string n)
{
    while (L != NULL)
    {
        if (L->surname == s && L->number == n)
            return true;
        else
            L = L->next;
    }
    return false;
}
