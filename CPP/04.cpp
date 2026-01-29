// Class and Objects

// 1. Car Class
#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int speed;
    string color;
    
    Car(){
        cout << "Default Constructor Method Called";
    }
    
    Car(string name){
        this->name = name;
    }  //Parameterized constructor
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};

int main(){
    Car c1("Suzuki");
    Car c2("Tata");
    
    cout << c1.name << endl;
    cout << c2.name << endl;
}

// 2. Student Class
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int classs;
    string sub;
    
    Student(string name, int classs, string sub){
        this->name = name;
        this->classs = classs;
        this->sub = sub;
    } 
};

int main(){
    Student s1("hehe", 12, "Maths");
    Student s2("haha", 10, "Science");
    
    cout << s1.name << ", " << s1.classs << ", " << s1.sub << endl;
    cout << s2.name << ", " << s2.classs << ", " << s2.sub << endl;
}

// In Runtime 
// Car Class
#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    int speed;
    string color;
    
    Car(){
        cout << "Default Constructor Method Called";
    }
    
    Car(string name){
        this->name = name;
    }  //Parameterized constructor
    void increaseSpeed(){
        
    }
    void fly(){
        
    }
};

int main(){

    Car *c1 = new Car("Tata");
    
    cout << c1->name << endl;
}

// Student Class
#include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int classs;
    string sub;
    
    Student(string name, int classs, string sub){
        this->name = name;
        this->classs = classs;
        this->sub = sub;
    } 
};

int main(){
    Student *s1 = new Student("hehe", 12, "Maths");
    Student *s2 = new Student("haha", 10, "Science");
    
    cout << s1->name << ", " << s1->classs << ", " << s1->sub << endl;
    cout << s2->name << ", " << s2->classs << ", " << s2->sub << endl;
}