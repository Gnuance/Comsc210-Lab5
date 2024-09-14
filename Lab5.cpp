#include <iostream>
using namespace std;

// int swap(int &, int &);
int swap(int *, int *);

int main()
{
    // int x = 5, y = 10;
    int *xPtr, *yPtr = nullptr;
    *xPtr = 5;
    *yPtr = 10;

    // cout << "x = " << x << "  | y = " << y << endl;
    cout << "xPtr = " << xPtr << "  | yPtr = " << yPtr << endl;

    cout << "Swapping...\n";
    // int sum = swap(x, y);
    int sum = swap(xPtr, yPtr);
    // cout << "x = " << x << " | y = " << y << endl;
    cout << "xPtr = " << xPtr << "  | yPtr = " << yPtr << endl;
    cout << "sum = " << sum << endl;

    delete xPtr, yPtr;
    xPtr = nullptr;
    yPtr = nullptr;

    return 0;
}

// int swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
//     return a + b;
// }

int swap(int *a, int *b)
{
    int *temp = a;
    a = b;
    b = temp;
    temp = nullptr;
    return *a + *b;
}