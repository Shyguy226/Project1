#include <iostream>
using namespace std;

int main()
{
    int a;
    term1 = 0;
    term2 = 1;
    next = 0;

    cout << "How many terms?";
    cin >> a;

    cout << "Answer: ";

    for (int i = 1; i < a+1; ++i)
    {
        if(i == 1)
        {
            cout << " " << term1;
            continue;
        }
        if(i == 2)
        {
            cout << term2 << " ";
            continue;
        }
        next = term1 + term2;
        term1 = term2;
        term2 = next;
        
        cout << next << " ";
    }
    return 0;
}
