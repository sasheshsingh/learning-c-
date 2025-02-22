#include <iostream>
#include <cmath>
using namespace std;

double taylorSeries(int x, int n){
    static double p =1, f = 1;
    if (n<=0){
        return 1;
    }
    double r = taylorSeries(x, n-1);
    f = f * (n);
    p = p * x;
    return r + p/f;
}

int main(){

    cout<<taylorSeries(4, 10)<<endl;    
    return 0;
}