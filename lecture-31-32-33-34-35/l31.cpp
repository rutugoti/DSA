#include<iostream>
#include<climits>

using namespace std;

// void printcol(int arr[][4],int row,int col){
//     //col wise
//     for(int j= 0;j<col;j++){
//         for(int i  = 0;i<row;i++){
//             cout<<arr[i][j]<<" ";
//         }
//     }
// }

void printmax(int arr1[][4],int row,int col){
    int index = -1,sum  = INT_MIN;

    for(int i=0;i<row;i++){
        int total = 0;
        for(int j =0;j<col;j++){
            total+=arr1[i][j];

            if(total>sum){
                sum =total;
                index = i;
            }
        }
    }
            cout<<index<<" ";

}

void printsumdiagnol(int matrix[][3],int row,int col){

    int first = 0;
    int second = 0;

    //first dig sum
    int i = 0;
    while(i<row){
        first +=matrix[i][i];
        i++;
    }

    //second diagonal

    i = 0;
    int j = col-1;

    while(j>=0){
        second+=matrix[i][j];
        i++,j--;

    }

    cout <<first<<" "<<second<<" ";
}

void reverserow(int matrix[][3],int row,int col){

    for(int i = 0;i<row;i++){
       int start = 0,end = col-1;
        while(start<end){

            swap(matrix[i][start],matrix[i][end]);
            start++,end--;

        }
    }
       for(int i = 0; i < row; i++) {
        for(int j = 0; j < col; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}



int main(){
    
    //create 2D array
    int arr1[3][4]={1,2,3,4,5,6,7,8,9,10,11,12};
    int arr2[3][4] ={0,1,2,3,4,5,6,7,8,9,10,11};
    int ans[3][4];

    //print the all the value  in the array

    // for(int row = 0;row<3;row++){
    //     for(int col = 0;col<4;col++){
    //         cout<<arr[row][col]<<endl;
    //     }
    // }

    //print the all the value col wise with the function

    //  printcol(arr,3,4);

    //find an element in array
    // int x=71;

    // for(int row = 0;row<3;row++){
    //     for(int col = 0;col<4;col++){
    //         if(arr[row][col] == x){
    //             cout<<"yes";
    //             return 0;
    //         }
    //     }
    // }

    // cout<<"no";

    //add 2 matrix
    // for(int row = 0;row<3;row++){
    //     for(int col = 0;col<4;col++){
    //         ans[row][col] = arr1[row][col]+arr2[row][col];
    //     }
    // }

    //  for(int row = 0;row<3;row++){
    //     for(int col = 0;col<4;col++){
    //         cout<<ans[row][col];
    //     }
    // }

    //print row index with the maximum sum
   // printmax(arr1,3,4);


    //print the sum of the diagonal element

    int matrix[3][3]={1,2,3,4,5,6,7,8,9};
   // printsumdiagnol(matrix,3,3);

    //revers the row of the matrix

    reverserow(matrix,3,3);
}