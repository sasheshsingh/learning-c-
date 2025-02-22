#include <iostream>

using namespace std;

void printNumber(int n){
    if (n<=0){
        cout<<endl;
        return;
    }
    cout<<n<<" ";
    printNumber(n-1);
}

void printReverseNumber(int n,bool end=false){
    if (n<=0){
        return;
    }
    printReverseNumber(n-1);
    cout<<n<<" ";
    if (end){
        cout<<endl;
    }
    return;
}

int calculatePower(int n, int pow){
    if (pow==0) {
        return 1;
    }
    return n * calculatePower(n, pow-1);
}

int main(){
    int n=15;
    cout<<"Printing Natural Number series in Descending Order using recursion."<<endl;
    printNumber(n);
    cout<<"Printing Natural Number series in Ascending Order using recursion."<<endl;
    printReverseNumber(n, true);
    cout<<"Printing Power of a Number using recursion."<<endl;
    cout<<calculatePower(n,2)<<endl;
    return 0;
}