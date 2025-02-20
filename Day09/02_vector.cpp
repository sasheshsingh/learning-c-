#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void printVector(vector<int> v){
    for (int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

void vectorFunction(){
    vector<int> v;
    printVector(v);
    v.push_back(1);
    printVector(v);
    v.emplace_back(3);
    printVector(v);

}

void printVectorPair(vector<pair<int, int>> v){
    for (int i=0;i<v.size();i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

void print2DVector(vector<vector<int>> v){
    for (int i=0;i<v.size();i++){
        for (int j=0;j<v[i].size();j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
}
void vectorPairFunction(){
    vector<pair<int, int>> vec;
    printVectorPair(vec);
    vec.push_back({1,2});
    printVectorPair(vec);
    vec.emplace_back(4,3);
    printVectorPair(vec);
}

int main(){
    cout<<"Vector Programming:"<<endl;
    vectorFunction();
    cout<<"Vector Pair Programming:"<<endl;
    vectorPairFunction();

    // This Vector defines 5 instance of 100.
    vector<int> v(5, 100);

    // This Vector defines 5 instances of garbage value.
    vector<int> v1(5);

    // This Vector defines 5 instance of integer with 20 value.
    vector<int> v2(5, 20);

    // This Vector defined Vector of type vector.
    vector<vector<int>> v3(2, v);
    print2DVector(v3);
    return 0;
}