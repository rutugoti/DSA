#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int start, int mid, int end)
{

    vector<int> temp(end - start + 1);

    int left = start, right = mid + 1, index = 0;

    while (left <= mid && right <= end)
    {
        if (arr[left] <= arr[right])
        {
            temp[index] = arr[left];
            index++, left++;
        }
        else
        {
            temp[index] = arr[right];
            index++, right++;
        }
    }

    // remaing in the left array if any

    while (left <= mid)
    {
        temp[index] = arr[left];
        index++, left++;
    }

    // remaing in the right array if any

    while (right <= end)
    {
        temp[index] = arr[right];
        index++, right++;
    }

    //put the temp value in the original array
    index=  0;

    while(start<= end){
        arr[start] = temp[index]; 
        start++,index++;
    }
}

void mergesort(int arr[], int start, int end)
{

    if (start == end)
        return;
    int mid = start + (end - start) / 2;
    // left

    mergesort(arr, start, mid);

    // right side

    mergesort(arr, mid + 1, end);

    merge(arr, start, mid, end);
}

int main()
{

    int arr[] = {2, 3, 4, 5, 7, 9, 0, 7, 5, 10};

    mergesort(arr, 0, 9);
    for (int i = 0; i < 10; i++)
        cout << arr[i] << " ";
}

//https://leetcode.com/problems/sort-an-array/
// class Solution {
// public:
//     void merge(vector<int>& arr, int start, int mid, int end) {

//         vector<int> temp(end - start + 1);

//         int left = start, right = mid + 1, index = 0;

//         while (left <= mid && right <= end) {
//             if (arr[left] <= arr[right]) {
//                 temp[index] = arr[left];
//                 index++, left++;
//             } else {
//                 temp[index] = arr[right];
//                 index++, right++;
//             }
//         }

//         // remaing in the left array if any

//         while (left <= mid) {
//             temp[index] = arr[left];
//             index++, left++;
//         }

//         // remaing in the right array if any

//         while (right <= end) {
//             temp[index] = arr[right];
//             index++, right++;
//         }

//         // put the temp value in the original array
//         index = 0;

//         while (start <= end) {
//             arr[start] = temp[index];
//             start++, index++;
//         }
//     }

//     void mergesort(vector<int>& arr, int start, int end) {

//         if (start == end)
//             return;
//         int mid = start + (end - start) / 2;
//         // left

//         mergesort(arr, start, mid);

//         // right side

//         mergesort(arr, mid + 1, end);

//         merge(arr, start, mid, end);
//     }
//     vector<int> sortArray(vector<int>& nums) {

//         mergesort(nums,0,nums.size()-1);

//         return nums;
//     }
// };