#include <iostream>
using namespace std;

int main()
{

    // reverse an array
    //  int arr[6] = {2,3,4,6,7,3};

    // int start  = 0;
    // int end = 5;

    // while(start<end){
    //     swap(arr[start],arr[end]);
    //     start++;
    //     end--;
    // }

    // for(int i=0;i<6;i++ ){
    //     cout <<arr[i]<< " ";
    // }

    // fibonnaci series find the number

    int n;
    cin >> n;

    int arr[1000];

    arr[0] = 0;
    arr[1] = 1;

    for (int i = 2; i < n ; i++)
    {
        arr[i] = arr[i - 1] + arr[i - 2];

      
    }
      cout << arr[n - 1];
}