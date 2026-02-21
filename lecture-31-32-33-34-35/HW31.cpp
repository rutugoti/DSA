#include<iostream>
using namespace std;




int smallestElement(int arr[][3], int row, int col) {
    int minVal = arr[0][0];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] < minVal)
                minVal = arr[i][j];
        }
    }

    return minVal;
}

int largestElement(int arr[][3], int row, int col) {
    int maxVal = arr[0][0];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            if(arr[i][j] > maxVal)
                maxVal = arr[i][j];
        }
    }

    return maxVal;
}

int diagonalSum(int arr[][3], int n) {
    int sum = 0;

    for(int i = 0; i < n; i++) {
        sum += arr[i][i];              // primary
        sum += arr[i][n - 1 - i];      // secondary
    }

    if(n % 2 == 1) {
        sum -= arr[n/2][n/2];  // remove center duplicate
    }

    return sum;
}


void subtractMatrix(int A[][3], int B[][3], int row, int col) {
    int result[10][10];

    for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            result[i][j] = A[i][j] - B[i][j];
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
}

void columnSum(int arr[][3], int row, int col) {
    for(int j = 0; j < col; j++) {
        int sum = 0;
        for(int i = 0; i < row; i++) {
            sum += arr[i][j];
        }
        cout << "Sum of column " << j << " = " << sum << endl;
    }
}

int main(){

    int arr[3][3] ={1,2,3,4,5,6,7,8,9};
    diagonalSum(arr,3);
    largestElement(arr,3,3);
}
