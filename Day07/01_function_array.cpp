#include <iostream>
using namespace std;
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void printPointer(int *arr,int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    arr[0]=99;
}
int main(){
    int arr[5]={1,2,3,4,5};
    print(arr,5);
    printPointer(arr,5);
    for (int i=0;i<5;i++){
        cout<<*(arr+i)<<" ";
    }
    cout<<endl;
}