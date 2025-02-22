#include <iostream>

using namespace std;

int func(int n){
    if (n>100){
        return n-10;
    }
    int ans = func(n+11);
    cout<<ans<<endl;
    return func(ans);
}

int main(){
    cout<<func(30)<<endl;
    return 0;
}