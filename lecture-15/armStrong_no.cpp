#include <iostream>
#include <math.h>

using namespace std;

// armstrong no 153 so 1^3 +5^3+3^3  =153 if yes then armstrong if  not then not.

int countdigit(int n)
{

    int count = 0;
    if (n == 0)
        return 1;

    while (n)
    {

        count++;
        n /= 10;
    }

    return count;
}

int armstrong(int num, int digit)
{

    int ans = 0, rem, n = num;

    while (n)
    {

        rem = n % 10;
        n /= 10;
        int power = 1;
        for (int i = 0; i < digit; i++)
        {
            power *= rem;
        }
        ans += power;
    }

    if (ans == num)
    {
        return 1;
    }
    else
    {

        return 0;
    }
}
int main()
{

    int num;
    cin >> num;

    // count digit

    int digit = countdigit(num);

    // armstrong no

    cout << armstrong(num, digit);
}