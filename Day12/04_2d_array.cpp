#include <iostream>

using namespace std;

int main() {
    int **a;
    a = new int*[3];
    a[0] = new int[4];
    a[1] = new int[4];
    a[2] = new int[4];
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            a[i][j] = i+j;
        }
    }
    for (int i=0;i<3;i++){
        for (int j=0;j<4;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    int x[4][3] ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10, 11, 12}}; 
    cout<<*(x+3)<<endl;
    cout<<*(x+3)<<endl;
    cout<<*(x+2)+3<<endl;
    return 0;
}