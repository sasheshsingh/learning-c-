#include <iostream>

using namespace std;

void functionWithStaticVariable(int n){
    static int x = 0;
    if (n<1){
        return;
    }
    cout << n + x++ << endl;
    functionWithStaticVariable(n-1);
    return;
}

void printNumber(int n) {
    if (n<1){
        return;
    }
    cout<<n<<" ";
    printNumber(n-1);
    printNumber(n-1);
}
int main(){
    int n = 20;
    functionWithStaticVariable(n);
    printNumber(5);
    return 0;
}