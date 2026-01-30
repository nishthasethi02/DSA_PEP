// Search
// Linear Search & Binary Search

#include <iostream>
using namespace std;    

//find the key in array using linear search, if key is found and the value of key > 5, then 
//return the double value of key otherwise return the half value of key
int LinearSearch(int arr[], int key){
    for(int i = 0; i < 5; i++){
        if (arr[i] == key){
            if (key > 5){
                return key * 2;
            }else{
                return key / 2;
            }
        }
    }
    return -1;
}

int binarySearch(int arr[], int key, int size){
    int start = 0;
    int end = size - 1;

    while (start <= end){
        int mid = (start + end) / 2;
        if (arr[mid] == key){
            return mid;
        }else if (arr[mid] < key){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {3,1,6,4,2};
    int key;
    cin >> key;
    cout << LinearSearch(arr, key);
    cout << endl;
    cout << binarySearch(arr, key, 5);
}