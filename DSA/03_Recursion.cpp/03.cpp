// Recursion

// // Head Recursion
// #include <iostream>
// using namespace std;

// void print(int n){
//     if(n==0)
//     return;

//     print(n-1);
//     cout<<n<<" ";
// }

// void print(int n){
//     if(n==0)
//     return;

//     cout<<n<<" ";
//     print(n-1);
// }

// int main(){
//     print(10);
// }

// Printing even numbers between 1 to 10
// #include <iostream>
// using namespace std;

// void printeven(int n ){
//     if(n<=0)
//     return;

//     printeven(n-1);
//     if(n%2==0)
//     cout<<n<<" ";
// }
// int main(){
//     printeven(11);
// }

// Factorial
// #include <iostream>
// using namespace std;
// int fact(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
//     return n*fact(n-1);
// }
// int main(){
//     cout<<fact(5);
// }

// Calculate power
// #include <iostream>
// using namespace std;

// int pwr(int b ,int p){
//     if(p==0){
//         return 1;
//     }
//     return b*pwr(b,p-1);
// }

// int main(){
//     cout<<pwr(3,3);
// }

//Fibonacci Series
// #include <iostream>
// using namespace std;

// int fib(int n){
//     if(n==0){
//         return 0;
//     }
//     if(n==1){
//         return 1;
//     }
//     return fib(n-1)+fib(n-2);
// }

// int main(){
//     cout<<fib(5);
// }

// Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. 
// The task is to return the count of distinct ways to climb to the top of the staircase.
// Note: The order of the steps taken matter

// Example:

// Input: N = 38
// Output: 3
// Explanation: There are three ways to reach the 3rd step.

// [1,1,1], [2,1], [1,2]

// To check if the array is sorted
// #include <iostream>
// using namespace std;

// bool isSorted(int arr[], int size){
//     if(size==0 || size==1){
//         return true;
//     }
//     if (arr[0] > arr[1]){
//         return false;
//     }
//     return isSorted(arr+1, size-1);
// }    
// int main(){
//     int arr[6] = {3,5,7,9,18,21};
//     cout << isSorted(arr, 6);
// }

// Find the sum of an array using recursion
// #include <iostream>
// using namespace std;

// int sumArr(int arr[], int size){
//     if(size==0){
//         return 0;
//     }
//     return arr[0] + sumArr(arr+1, size-1);
// }

// int main(){
//     int arr[5] = {1,2,3,4,5};
//     cout << sumArr(arr, 5);
// }

// Find key in the array using recursion
// #include <iostream>
// using namespace std;

// bool keypresent(int arr[], int size, int key){
//     if(size==0){
//         return false;
//     }
//     if(arr[0]==key){
//         return true;
//     }
//     return keypresent(arr+1, size-1, key);
// }

// int main(){
//     int arr[7]={3,5,2,1,9,8,7};
//     cout << keypresent(arr, 7, 8);
// }

// Binary Search using recursion
// #include <iostream>
// using namespace std;    
// bool binarySearch(int arr[], int left, int right, int key){
//     if(left > right){
//         return false;
//     }
//     int mid = left+(right-left)/2;
//     if(arr[mid]==key){
//         return true;
//     }
//     else if(arr[mid]<key){
//         return binarySearch(arr, mid+1, right, key);
//     }
//     else{
//         return binarySearch(arr, left, mid-1, key);
//     }
// }
// int main(){
//     int arr[10]={3,5,7,8,9,12,14,17,20,22};
//     cout<< binarySearch(arr, 0, 9, 7);
// } // - Time Complexity: O(log n) because the search space is halved with each recursive call
//   // - Space Complexity: O(log n) due to recursive stack space

// nlogn algorithms like Merge Sort and Quick Sort also use recursion, but their time complexity is O(n log n) because 
// they divide the array and then merge or sort them, which involves linear time operations at each level of recursion.

// Merge Sort
// #include <iostream>
// using namespace std;
// void merge(int arr[], int start, int end){

//     int mid = (start + end)/2;

//     // find the length of left splitted array - adding one because while calculating index, we subtracting one..now to find size we are adding one
//     int len1 = (mid - start) + 1;
//     // find the length of right splitted array
//     int len2 = end - mid;
//     // creating two new arrays
//     int *arr1 = new int[len1];
//     int *arr2 = new int[len2];

//     // Copy values from start to mid in arr1
//     int k = start;
//     for(int i = 0; i < len1; i ++){
//         arr1[i] = arr[k++];
//     }
//     // Copy values from mid+1 to end in arr2
//     k = mid + 1;
//     for ( int i  = 0; i < len2; i++){
//         arr2[i] = arr[k++];
//     }

//     // after the values are copied.. now we sort and merge the 2 arrays
//     int i = 0;
//     int j = 0;
//     k = start;

//     while(i < len1 && j < len2){
//         if(arr1[i] < arr2[j]){
//             arr[k++] = arr1[i++];
//         }
//         else{
//             arr[k++] = arr2[j++];
//         }
//     }
    
//     // need to check for remaining elements
//     while(i  < len1){
//         arr[k++] = arr1[i++];
//     }

//     while(j < len2){
//         arr[k++] = arr2[j++];
//     }

//     delete []arr1;
//     delete []arr2;
// }
// void mergeSort(int arr[], int start, int end){
//     if(start>=end){
//         return;
//     }
//     int mid = (start + end)/2;
//     mergeSort(arr, start, mid);
//     mergeSort(arr, mid+1, end);
//     // -- dividing till one element left in each part --

//     merge(arr, start, end);
// }
// int main(){
//     int arr[] = {2,5,1,6,7,3,10};
//     int n =7;
//     mergeSort(arr, 0, n-1);
//     for(int i : arr ){
//         cout << i << " ";
//     }
// }

// // Quick Sort
// #include <iostream>
// using namespace std;

// int partition(int arr[], int start, int end){
//     // find pivot(first element)
//     int pivot = arr[start];

//     //counting how many elements are less than pivot
//     int count = 0;
//     for(int i = start + 1; i <= end; i++){
//         if(arr[i] < pivot){
//             count++;
//         }
//     }

//     // after counting, we got to know about the right place of pivot, now we will create a pivot index at that position
//     int pivotIndex = start + count;
//     swap(arr[pivotIndex], arr[start]);

//     // now we will handle the right and left part in which all the elements should be less and greater respectively
//     int i = start, j = end;

//     while(i < pivotIndex && j > pivotIndex){
//         while(arr[i] < pivot)  i++;
//         while(arr[j] > pivot) j--;
//         swap(arr[i++], arr[j--]);
//     }
//     return pivotIndex;
// }
// void quickSort(int arr[], int start, int end){
//     if(start >= end)
//     return;

//     int p = partition(arr, start, end);

//     quickSort(arr, start, p-1);
//     quickSort(arr, p+1, end);
// }

// int main(){
//     int arr[] = {4,5,2,1,7,3,8};
//     quickSort(arr,0,6);

//     for(int i : arr){
//         cout << i << " ";
//     }
// }