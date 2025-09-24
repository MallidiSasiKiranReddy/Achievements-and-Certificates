#include<iostream>
using namespace std;
class MyClass {
public:
    int value;
    void display() {
        std::cout << "Value: " << value << std::endl;
    }
};

int main() {
    MyClass obj;
    obj.value = 10;

    MyClass* ptr = &obj;  // Pointer to the object

    // Using the arrow operator to access members
    ptr->value = 20;
    ptr->display();

    return 0;
}