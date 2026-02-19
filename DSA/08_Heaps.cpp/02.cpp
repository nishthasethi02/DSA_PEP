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
    void bubbleDown(){
        int i = 0;
        int size = heap.size();
        while(i < size){
            int i = 0;
            int left = 2 * i;
            int right = 2 * i + 1;
            int largest = i;

            if(left < size && heap[left] > heap[largest]){
            largest = left;
            }
            if (right < size && heap[right] > heap[largest]){
                largest = right;
            }
            if(largest != i){
                swap(heap[i], heap[largest]);
                i = largest;
            }
            else{
                break;
            }
        }
        
    }
   
    void insert(int value){
        heap.push_back(value);
        bubbleUp(heap.size() - 1);
    }

    void deletee(){
        swap(heap[0], heap[heap.size()-1]);
        bubbleDown();
    }
};