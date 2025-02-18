#include <iostream>

using namespace std;
// Call by Value
void swap(int a, int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int a=10;
    int b=20;
    cout<<"Before swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    swap(a,b);
    cout<<"After swapping"<<endl;
    cout<<"a="<<a<<endl;
    cout<<"b="<<b<<endl;
    return 0;
}