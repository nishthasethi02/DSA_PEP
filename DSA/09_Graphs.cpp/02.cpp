// Unweighted Graph
// #include <iostream>
// #include <list>
// #include <unordered_map>
// #include <vector>
// using namespace std;

// int main(){
//     int n; // number of vertices
//     int m; // number of edges

//     cout << "Enter the number of vertices : ";
//     cin >> n;
//     cout << "Enter the number of edges : ";
//     cin >> m;

//     unordered_map<int, list<int>> adjList;
//     cout << "Enter edges (u, v) : " << endl;
//     //cout << "\nAdjacency List : " << endl;
//     for(int i = 0; i < m; i++){
//         int u ,v;
//         cin >> u >> v;

//         adjList[u].push_back(v);
//         adjList[v].push_back(u); // comment out this to make the graph directed
//     }
//     cout << "Adjacenecy List : " << endl;

//     for(auto i : adjList){
//         cout << i.first << " -> ";
//         for(auto j : i.second){
//             cout << j << " ";
//         }
//         cout << endl;
//     }
// }

// Weighted Graph
#include <iostream>
#include <list>
#include <unordered_map>
#include <vector>
using namespace std;

int main(){
    int n; // number of vertices
    int m; // number of edges

    cout << "Enter the number of vertices : ";
    cin >> n;
    cout << "Enter the number of edges : ";
    cin >> m;

    unordered_map<int, list<pair<int, int>>> adjList;
    cout << "Enter edges (u, v) : " << endl;
    //cout << "\nAdjacency List : " << endl;
    for(int i = 0; i < m; i++){
        int u ,v, w;
        cin >> u >> v >> w;

        adjList[u].push_back({v, w}); // in user input write it as u v w
        //adjList[v].push_back(u); // comment out this to make the graph directed
    }
    cout << "Adjacenecy List : " << endl;

    for(auto i : adjList){
        cout << i.first << " -> ";
        for(auto j : i.second){
            cout << "(" << j.first << ", " << j.second << " ) ";
        }
        cout << endl;
    }
}