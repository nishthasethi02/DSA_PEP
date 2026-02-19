#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class MaxHeap{
    public:
    vector<int> heap;

    void bubbleUp(int index){
        // find the parent
        while(index > 0){
            int parent = (index - 1)/2;

            // if curr->node > parent
            if(heap[index] > heap[parent]){
                swap(heap[index], heap[parent]);
                index = parent;
            }
            else{
                break;
            }
        }
    }
};