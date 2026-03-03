#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter rows and column: ";
    cin >> n >> m;

    // Creating an array which stores the address
    int **p = new int *[n];

    // creating 2D array;
    for (int i = 0; i < n; i++)
    {
        *(p + i) = new int[m];
    }

    // taking values from user
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cin >> *(*(p + i) + j);
    }

    // printing values
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << *(*(p + i) + j) << " ";
        cout << endl;
    }

    // Releasing the memory
    for (int i = 0; i < n; i++)
        delete[] *(p + i);

    delete[] p;
}



// #include <iostream>
// using namespace std;

// int main()
// {
//     int L, B, H;
//     cout << "Enter length || Breadth || Height: ";
//     cin >> L >> B >> H;

//     // CREATING 3D ARRAY
//     // FIRST 1D ARRAY OF POINTER WHO POINTS 2D ARRAY
//     int ***p = new int **[L];

//     // SECOND CREATING 2D ARRAY
//     for (int i = 0; i < L; i++)
//     {
//         *(p + i) = new int *[B];
//         for (int j = 0; j < B; j++)
//         {
//             *(*(p + i) + j) = new int[L];
//         }
//     }

//     // TAKING INPUT
//     for (int i = 0; i < L; i++)
//     {
//         for (int j = 0; j < B; j++)
//         {
//             for (int k = 0; k < H; k++)
//                 cin >> p[i][j][k];
//         }
//     }
//     cout << "Printing 3D Array: \n";

//     // PRINGTING OUTPUT
//     for (int i = 0; i < L; i++)
//     {
//         for (int j = 0; j < B; j++)
//         {
//             for (int k = 0; k < H; k++)
//                 cout << p[i][j][k] << " ";
//             cout << endl;
//         }
//         cout << endl;
//     }

//     // RELEASING THE MEMORY
//     for (int i = 0; i < L; i++)
//     {
//         for (int j = 0; j < B; j++)
//         {
//             delete[] *(*(p + i) + j);
//         }
//         delete[] *(p + i);
//     }
//     delete[] p;

//     return 0;
// }