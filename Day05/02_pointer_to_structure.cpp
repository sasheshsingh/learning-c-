#include <iostream>

using namespace std;

struct rectangle {
    int length;
    int breadth;
};

int main(){
    struct rectangle *r;
    r = new rectangle;
    r->length = 10;
    r->breadth = 5;
    cout << (*r).length * (*r).breadth<<endl;
    return 0;
}