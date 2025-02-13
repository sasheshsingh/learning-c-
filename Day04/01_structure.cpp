#include <iostream>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
}r2;

int main(){
    struct Rectangle r={10,5};
    cout<<"Area of rectangle is "<<r.length*r.breadth<<endl;
    r2.length=15;
    r2.breadth=10;
    cout<<"Area of rectangle is "<<r2.length*r2.breadth<<endl;

    // Size of struct 
    cout<<"Size of struct is "<<sizeof(r)<<endl;
    return 0;
}