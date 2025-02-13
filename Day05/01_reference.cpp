#include <iostream>

using namespace std;

int main(){
    int a=10;
    int &r=a;
    cout<<"Before value of a: "<<a<<endl;
    r++;
    cout<<"After value of a: "<<a<<endl;
    return 0;
}