#include <iostream>

using namespace std;

struct Array{
    int arr[10];
    int len;
};

void display(Array arr){
    for(int i = 0; i < arr.len; i++){
        cout << arr.arr[i] << " ";
    }
    cout << endl;
}
void doubleArray(Array *arr){
    for(int i = 0; i < arr->len; i++){
        arr->arr[i] *= 2;
    }
}
int main(){
    Array arr = {{1,2,3,4,5,6,7,8,9,10}, 10};
    display(arr);
    doubleArray(&arr);
    display(arr);
    return 0;
}