#include<iostream>

using namespace std;

int pangkat(int a, int b) {
    int sum = a;
    for(int i = 1; i < b; i++) {
        sum *= a;
    }
    return sum;
}

int main() {
    int x;
    int y;
    cout<<"Masukkan nilai x: ";
    cin>>x;
    cout<<"Masukkan nilai y: ";
    cin>>y;
    cout << pangkat(x, 2) + pangkat(y, 3) << endl;
    return 0;
}