#include <iostream>
using namespace std;

int main()
{

    int n = 10;
    int *p = &n;   // single pointer
    int **p2 = &p; // double pointer
    int ***p3 = &p2;

    // cout << p << endl;
    // cout << p2 << endl;
    // cout << &p2 << endl;

    // cout << p3 << endl;

    //modify the value

    *p = *p+5;
    cout<<n;
}