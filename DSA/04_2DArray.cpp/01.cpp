// #include <iostream>
// using namespace std;

// int main(){
//     //int arr[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
//     //int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

//     int arr[3][4];
//     // // Row wise input
//     // for(int i = 0; i < 3;i++){
//     //     for(int j = 0; j < 4;j++){
//     //         cin>> arr[i][j];   
//     //     }
//     // }

//     // for(int i = 0; i < 3; i ++){
//     //     for(int j = 0; j < 4; j++){
//     //         cout<< arr[i][j] << " ";
//     //     }
//     //     cout<< endl;
//     // }

//     // // Column wise input
//     // for(int i = 0; i< 4; i++){
//     //     for(int j = 0; j < 3; j++){
//     //         cin >> arr[j][i];
//     //     }
//     // }
//     // // Print column wise
//     // for(int i = 0; i < 3; i++){
//     //     for(int j = 0; j < 4; j++){
//     //         cout<< arr[i][j] << " ";
//     //     }
//     //     cout<< endl;
//     // }

// }

// Find key - if the key is present in array return true else false
#include <iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) { // important to mention column - baki do it with vectors
    for(int i = 0; i < 4; i++){
        for(int j = 0; j  < 4; j++){
            if(arr[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
int main(){
    int arr[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
    if(isPresent(arr, 6, 4, 4)){
        cout << "Element is Present";
    }else{
        cout << "Element not present";
    }
}