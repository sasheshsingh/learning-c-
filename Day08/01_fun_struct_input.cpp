#include <iostream>

using namespace std;

struct rectangle {
    int l;
    int b;
};

void area(struct rectangle r){
    cout << r.l*r.b << endl;
    return;
}

void doubleRectangle(struct rectangle *r){
    r->l *= 2;
    r->b *= 2;
    return;
}

int main(){
    struct rectangle r = {10,5};
    area(r);
    cout<<"Before Change"<<endl;
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    doubleRectangle(&r);
    cout<<"After Change"<<endl;
    cout<<r.l<<endl;
    cout<<r.b<<endl;
    area(r);
    return 0;
}