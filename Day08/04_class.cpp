#include <iostream>

using namespace std;

class Rectangle{
    private:
        int l;
        int b;
    public:
    void setLength(int l){
        this->l = l;
    }
    void setBreadth(int b){
        this->b = b;
    }
    void print(){
        cout << l << " " << b << endl;
    }
    int getLength(){
        return l;
    }
    int getBreadth(){
        return b;
    }
    void Area(){
        cout << l*b << endl;
    }
};

int main(){
    Rectangle r;
    r.setLength(10);
    r.getLength();
    r.setBreadth(12);
    r.getBreadth();
    r.print();
    r.Area();
    return 0;
}