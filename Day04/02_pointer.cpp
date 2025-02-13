#include <iostream>
using namespace std;

int main() {
    // Pointer to Variable
    int a = 10;
    int *p;
    p = &a;
    cout<<"Value of a is "<<a;
    cout<<"\nAddress of a is "<<&a;
    cout<<"\nValue of p is "<<p;
    cout<<"\nAddress of a is "<<&a;
    cout<<"\nValue of the data at the address pointed by p is "<<*p;

    // Pointer to Array
    int A[3] = {2,1,3};
    int *p2;
    p2 = A;
    cout<<"\nValue of A is "<<A;
    cout<<"\nAddress of P is "<<p2;
    cout<<"\nValue of the data at the address pointed by p is "<<*(p2+1);

    // Pointer to Array in heap
    int *p3;
    p3 = (int *)malloc(3*sizeof(int));
    p3[0] = 21;
    p3[1] = 5;
    p3[2] = 3;
    cout<<"\nValue of P is "<<p3;
    cout<<"\nValue of the data at the address pointed by p is "<<*(p3+1);
    cout<<"\nValue of the data at the address pointed by p is "<<*(p3+2);
    cout<<"\nValue of the data at the address pointed by p is "<<*(p3);
    cout<<"\nSize of pointer p3 is "<<sizeof(p3);
    delete [] p3;
    return 0;
}