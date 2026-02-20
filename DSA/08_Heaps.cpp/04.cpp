/* 
Priority Queue -> It is a special type of queue where elements are accessed on basis of priority, not the insertion order
               -> By default it has high
               -> internally it is 


*/

#include <iostream>
#include <queue>
using namespace std;

int main(){
    // (max heap)
    priority_queue<int> pq_max;

    // (min heap)
    priority_queue<int, vector<int>, greater<int>> pq_min;

    pq_max.push(10);
    pq_max.push(5);
    pq_max.push(20);

    cout << pq_max.size() << endl;

    while(!pq_max.empty()){
        cout << pq_max.top() << " ";
        pq_max.pop();
    }

    pq_max.pop();
}

// https://leetcode.com/problems/kth-largest-element-in-an-array/

// https://www.geeksforgeeks.org/problems/k-largest-elements4206/1

// https://www.geeksforgeeks.org/problems/k-largest-elements4206/1 -- Time Complexity -> n log(k)

// https://www.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1

// https://leetcode.com/problems/find-k-closest-elements/description/
