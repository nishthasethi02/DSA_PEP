// https://www.geeksforgeeks.org/problems/common-elements1132/1

// class Solution {
//   public:
//     // Function to find common elements in three arrays.
//     vector<int> commonElements(vector<int> &arr1, vector<int> &arr2,
//                                vector<int> &arr3) {
//         // Code Here
//         int i = 0;
//         int j = 0;
//         int k = 0;
        
//         vector<int> result;
        
//         while(i<arr1.size() && j<arr2.size() && k<arr3.size()){
//             if(arr1[i] == arr2[j] && arr2[j] == arr3[k]){
//                 if(result.empty() || result.back() != arr1[i]){                   
//                     result.push_back(arr1[i]);
//                 }
//                 i++;
//                 j++;
//                 k++;
//             }
//             else if (arr1[i] < arr2[j]){
//                 i++;
//             }
//             else if (arr2[j] < arr3[k]){
//                 j++;
//             }
//             else{
//                 k++;
//             }
//         }
//         return result;
//     }
// };
