#include <iostream>
using namespace std;
#include <string>



// Overloaded functions for multiply
int multiply(int a, int b) {
    return a * b;}

float multiply(float a, float b, float c) {
    return a * b * c;}

// Template function for add
template <typename unique> 
    unique add(unique m, unique n) {
    return m + n;}

// Struct 
struct family {
    int total;
    string status;
    } siblings;

struct kids{
    int age;
    family child;  // Nested structure representing the child's family
    }mimi;


int main() {
    int a = 7, b = 9;                    //assigning value for overload funton called multiply
    float t = 1.2, i = 2.3, j = 1.5;

    cout << multiply(a, b) << "\n";
    cout << multiply(t, i, j) <<endl;

    double m = 9.8, n = 6.5;           //for template 
    cout << add(m,n)<<endl;

    

    siblings.total = 5;
    siblings.status = "rich";
    family *address;   //Declaring a pointer to family and assigning it the address of siblings
    address = &siblings;
    mimi.child.total = 4;  // Mimi's family has 4 members

    cout << "a: " << siblings.total;
    cout << "  b: " << siblings.status<<endl;
    cout<<address->total;   // Accessing total using the pointer to siblings
    cout << mimi.age<<endl;
     cout<<mimi.child.total;

return 0;
    
}
