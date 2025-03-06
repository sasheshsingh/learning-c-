#include <iostream>

using namespace std;

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr){
    int i;
    for (i=0;i<arr.length;i++){
        cout<<arr.A[i]<<" ";
    }

    cout<<endl;
}
void Insert(struct Array *arr, int pos, int val){
    arr->length++;
    for (int i=arr->length-1;i>pos+1;i--){
        arr->A[i+1] = arr->A[i];
    }
    arr->A[pos] = val;
}

void Delete(struct Array *arr, int pos){
    for (int i=pos;i<arr->length;i++){
        arr->A[i] = arr->A[i+1];
    }
    arr->length--;
}

int main(){
    struct Array arr= {{1,2,3,4,5,6,7,8}, 20, 8};
    arr.size = 20;
    Display(arr);
    Insert(&arr, 3, 100);
    Display(arr);
    Delete(&arr, 2);
    Display(arr);
    return 0;
}