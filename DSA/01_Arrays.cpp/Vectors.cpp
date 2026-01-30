#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> vec1 = {2,3,1,5,4};

    //vector<char> vec2(5);

    //cout << vec1[2];
    //cout << vec1[6]; // no error but garbage value

    //cout << vec1.at(2);
    //cout << vec1.at(6); // error - exception handling ka part it is

    vec1.push_back(10);

    for (int i : vec1){
        cout << i << " ";
    }

    vec1.pop_back();

    for (int i : vec1){
        cout << i << " ";
    }

    vec1.clear();
}