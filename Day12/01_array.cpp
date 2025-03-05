#include <iostream>

using namespace std;

int main() {
    int arr[10]= {2};
    cout<<"Size of Array is:"<<sizeof(arr)/sizeof(int)<<endl;
    for (int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}