#include <iostream>

using namespace std;
int findSum(int n){
    if (n<=0){
        return 0;
    }
    return n + findSum(n-1);
}
int main(){
    int n;
    cin>>n;
    cout<<"Sum of Natural Number of n is:"<<endl;
    cout<<findSum(n)<<endl;
    return 0;
}