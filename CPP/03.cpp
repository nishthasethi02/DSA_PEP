// // References -> Never Null
// #include <iostream>
// using namespace std;

// int main(){
//     int age = 5;
//     int &ref = age; // other name for age
//     ref = 20;
//     cout << age << endl;
// }

// // Pass by value
// #include <iostream>
// using namespace std;

// void increment(int x){
//     x++;
//     cout << "Inside value : " << x << endl;
// }
//  int main(){
//      int age = 5;
//      increment(age);
//      cout << "In main value: " << age << endl;
//  }

//  // Pass by Reference
//  #include <iostream>
// using namespace std;

// void increment(int &x){
//     x++;
//     cout << "Inside value : " << x << endl;
// }
//  int main(){
//      int age = 5;
//      increment(age);
//      cout << "In main value: " << age << endl;
//  }

//  // Pointers
// #include <iostream>
// using namespace std;

//  int main(){
//     int a = 5;
//     int &ref = a;

//     int *ptr = &a; //int *ptr = a; -> error

//     cout << a << endl;
//     cout << ref << endl;

//     cout << &ref << endl;
//     cout << ptr << endl;

//     cout << *ptr << endl; // dereferencing
//  }

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int *p = &x;
//     *p = 20;
    
//     cout << x;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int &r = x;
//     r++; 
    
//     cout << x;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int x = 10;
//     int *p = &x;
//     (*p)++;

//     cout << x;  
// }

