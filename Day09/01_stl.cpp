#include <iostream>

using namespace std;

// Pair
void pairFunction(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;
    pair<int, pair<int, int>> p2 = {1, {3, 4}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second << endl;
    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}};
    for (int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        cout<<arr[i].first<<" "<<arr[i].second<<endl;
    }
    return;
}

int main(){
    pairFunction();
    return 0;
}