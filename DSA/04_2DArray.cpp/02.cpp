// // Sum of 2D Array
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][3] = {{6,2,5},{1,7,9},{4,8,3}};
//     int sum = 0;
//     for(int i = 0; i < 3; i++){
//         for(int j = 0; j < 3; j++){
//             sum += arr[i][j];
//         }
//     }
//     cout << sum;
// }

// Sum of 2D Array - Function
// #include <iostream>
// using namespace std;

// void printSum(int arr[][3], int row, int col){
//     int sum = 0;
//     for(int i = 0; i < row; i++){
//         for(int j = 0; j < col; j++){
//             sum += arr[i][j];
//         }
//     }   
//     cout << sum;    
// }

// int main(){
//     int arr[3][3] = {{6,2,5},{1,7,9},{4,8,3}};
//     printSum(arr, 3, 3);
// }

// // Sum - Row Wise
// #include <iostream>
// using namespace std;

// int main(){
//     int arr[3][3] = {{6,2,5},{1,7,9},{4,8,3}};
//     for(int i = 0; i < 3; i++){
//         int sum = 0;
//         for(int j = 0; j < 3; j++){
//             sum += arr[i][j];
//         }
//         cout << sum;
//     }
// }

// Sum Row wise - Function
// #include <iostream>
// using namespace std;

// void printSumRow(int arr[][3], int row, int col){
//     for(int i = 0; i < row; i++){
//         int sum = 0;
//         for(int j = 0; j < col; j++){
//             sum += arr[i][j];
//         }
//         cout << sum << endl;
//     }  
// }

// int main(){
//     int arr[3][3] = {{6,2,5},{1,7,9},{4,8,3}};
//     printSumRow(arr, 3, 3);
// }

// Max sum of which row return index of that row
// #include <iostream>
// using namespace std;

// int maxSumRow(int arr[][3], int row, int col){
//     int maxx = INT_MIN;
//     int rowIndex = -1;
//     for(int i = 0; i < row; i++){
//         int sum = 0;
//         for(int j = 0; j < col; j++){
//             sum += arr[i][j];
//         }
//         if(sum > maxx){
//             maxx = sum;
//             rowIndex = i;
//         }
//     }  
//     return rowIndex;
// }
// int main(){
//     int arr[3][3] = {{6,2,5},{1,7,9},{4,8,3}};
//     int rowIndex = maxSumRow(arr, 3, 3);
//     cout << rowIndex;
// }

//Max Column Sum
// #include <iostream>
// using namespace std;

// int maxSumCol(int arr[][3], int row, int col){
//     int maxx = INT_MIN;
//     int colIndex = -1;
//     for(int i = 0; i < col; i++){
//         int sum = 0;
//         for(int j = 0; j < row; j++){
//             sum += arr[i][j];
//         }
//         if(sum > maxx){
//             maxx = sum;
//             colIndex = i;
//         }
//     }  
//     return colIndex;
// }
// int main(){
//     int arr[3][3] = {{6,2,5},{1,7,9},{4,8,3}};
//     int colIndex = maxSumCol(arr, 3, 3);
//     cout << colIndex;
// }

// Wave Print
// #include <iostream>
// using namespace std;

// void wavePrint(int arr[][4], int row, int col){
//     for(int j = 0; j < col; j++){
//         if(j%2==0){
//             for(int i = 0;i <row; i++){
//                 cout << arr[i][j];
//             }
//         }
//         else{
//             for(int i = row - 1; i>= 0;i--){
//                 cout << arr[i][j];bhcfr
//             }
//         }
//     }
//     cout << endl;
// }

// int main (){
//     int arr[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
//     wavePrint(arr, 4, 4);
// }

// SpiralPrint
// #include <iostream>
// using namespace std;

// void spiralPrint(int arr[][4], int row, int col){
//     int topRow = 0;
//     int bottomRow = row - 1;
//     int leftCol = 0;
//     int rightCol = col - 1;

//     while(topRow <= bottomRow && leftCol <= rightCol ){
//         //Print top row
//         for(int i = leftCol; i <= rightCol; i++){
//             cout << arr[topRow][i] << " ";
//         }
//         topRow++;

//         // Print right col
//         for(int i = topRow; i <= bottomRow; i++){
//             cout << arr[i][rightCol] << " ";
//         }
//         rightCol--;

//         // Print bottom row
//         for(int i = rightCol; i >= leftCol; i--){
//             cout << arr[bottomRow][i] << " ";
//         }
//         bottomRow--;

//         // Print left col
//         for(int i = bottomRow; i >= topRow; i--){
//             cout << arr[i][leftCol] << " ";
//         }
//         leftCol++;
//     }
// }

// int main(){
//     int arr[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
//     spiralPrint(arr, 4, 4);
// }

// Only Boundary Print
#include <iostream>
using namespace std;

void spiralPrint(int arr[][4], int row, int col){
    int topRow = 0;
    int bottomRow = row - 1;
    int leftCol = 0;
    int rightCol = col - 1;

    //while(topRow <= bottomRow && leftCol <= rightCol ){
        //Print top row
        for(int i = leftCol; i <= rightCol; i++){
            cout << arr[topRow][i] << " ";
        }
        topRow++;

        // Print right col
        for(int i = topRow; i <= bottomRow; i++){
            cout << arr[i][rightCol] << " ";
        }
        rightCol--;

        // Print bottom row
        for(int i = rightCol; i >= leftCol; i--){
            cout << arr[bottomRow][i] << " ";
        }
        bottomRow--;

        // Print left col
        for(int i = bottomRow; i >= topRow; i--){
            cout << arr[i][leftCol] << " ";
        }
        leftCol++;
    }
//}

int main(){
    int arr[4][4] = {{1,7,14,6},{11,15,5,10},{2,4,16,3},{9,13,8,12}};
    spiralPrint(arr, 4, 4);
}