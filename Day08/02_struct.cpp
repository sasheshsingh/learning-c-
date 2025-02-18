#include <iostream>

using namespace std;

struct Rectangle{
    int l;
    int b;
};
void initializeRectangle(struct Rectangle *r, int l, int b){
    r->l = l;
    r->b = b;
}

void changeLength(struct Rectangle *r, int l){
    r->l = l;
}

void changeBreadth(struct Rectangle *r, int b){
    r->b = b;
}

void area(struct Rectangle r){
    cout<<r.l*r.b<<endl;
}
void printRectangle(struct Rectangle r){
    cout<<"Length is: "<<r.l<<endl;
    cout<<"Breadth is: "<<r.b<<endl;
}
int main(){
    struct Rectangle r;
    initializeRectangle(&r, 5, 7);
    printRectangle(r);
    area(r);
    changeLength(&r, 10);
    printRectangle(r);
    area(r);
    changeBreadth(&r, 15);
    printRectangle(r);
    area(r);
    return 0;
}