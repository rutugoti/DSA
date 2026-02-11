#include <iostream>
using namespace std;

int main()
{

    // Q-1
    //  int n;

    // for(int i=0;i<20;i++){
    //     cout << "india will win world cup 2027";
    // }

    // Q-2

    // int n;
    // cin >> n;

    // for (int i = 1; i < n; i = i + 1)
    // {
    //     if (i % 2 == 1)
    //     {
    //         cout << i;
    //     }
    // }

     int n;
    cin >> n;

    for (int i = 1; i < n; i = i + 1)
    {
        if (i %4 == 0)
        {
            cout << i<<endl;
        }
    }
}