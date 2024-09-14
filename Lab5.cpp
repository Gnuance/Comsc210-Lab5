#include <iostream>
using namespace std;

// int swap(int &, int &);
int swap(int *&, int *&); // Swap pointers

int main()
{
    // Initialize variables
    // int x = 5, y = 10;
    int *xPtr = new int(5);
    int *yPtr = new int(10);

    // Console print before swap
    // cout << "x = " << x << "  | y = " << y << endl;
    cout << "xPtr = " << *xPtr << "  | yPtr = " << *yPtr << endl; 

    cout << "Swapping...\n";
    // int sum = swap(x, y);
    int sum = swap(xPtr, yPtr); // Swap pointers

    // Console print after swap
    // cout << "x = " << x << " | y = " << y << endl;
    cout << "xPtr = " << *xPtr << "  | yPtr = " << *yPtr << endl;
    cout << "sum = " << sum << endl;

    // Deallocate heap elements and nullify pointers
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

// Just swap what the pointers are pointing at instead of dereferencing
int swap(int *&a, int *&b)
{
    int *temp = a;
    a = b;
    b = temp;
    temp = nullptr;
    return *a + *b;
}