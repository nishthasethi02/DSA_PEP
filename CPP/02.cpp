// Loops
// Local & Global Variable Scope
#include <iostream>
using namespace std;

int main(){
    int i = 0;
    //int i = 5;
    for(int i = 0; i <10; i++){
        cout << i << endl;
    }
    cout << i << endl;

    for (int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            cout << i << " - " << j << endl;
        }
    }

    int i = 0;
    while (i < 10){
        cout << i << " ";
        i++;
    }

    do{
        cout << i << " ";
        i++;
    }
    while (i < 10);

    // Example: 

    int pin = 1234;
    int entered ;
    while (entered != pin){
        cout << "Enter the pin: ";
        cin << entered ;
    }
    cout << "Access Granted";
}