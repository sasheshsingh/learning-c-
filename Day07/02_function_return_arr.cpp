#include <iostream>
using namespace std;

int* createArray(int size){
    int *p = (int *)malloc(size * sizeof(int));
    for (int i=0;i<size;i++){
        p[i]=i*2;
    }
    return p;
}

void printArray(int *arr, int size){
    for(int i = 0; i < size; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int *arr;
    arr = createArray(5); 
    printArray(arr, 5);   
}