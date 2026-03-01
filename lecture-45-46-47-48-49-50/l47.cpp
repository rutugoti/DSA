#include <iostream>
using namespace std;

void swapping(int *p1,int *p2){
    int temp = *p1;
    *p1  = *p2;
    *p2  = temp;
}

int main()
{

    // char arr[5] = {1, 2, 3, 4, 5};

    // char *ptr = arr;

    // cout << (void *)ptr << endl;
    // cout << (void *)arr << endl;

    // char name = 'a';

    // cout<<(void *) &name;

    int first = 10,second  =  20;

    swapping(&first,&second);
    cout<<first<<" "<<second;
}