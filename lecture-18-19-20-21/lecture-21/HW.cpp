
#include <iostream>
using namespace std;

int main()
{

    int arr[1000];

    cout << "enter the no of array for the insert";

    int n;
    cin >> n;

    cout << "enter array for the inserted no";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n ; i++)
    {
        int swapped = 0;
        for (int j = i; j > 0; j--)
        {

            swapped = 1;
            if (arr[j] > arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }else{
                break;
            }
        }

        if (swapped == 0)
            break;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}