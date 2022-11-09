#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}
char sum(char a, char b) {
    return a + b;
}
float sum(float a, float b, float c) {
    return a + b + c;
}

int main(){
    cout << sum(1, 2) << endl;
    cout << sum('a', 'b') << endl;
    cout << sum(1.1, 2.2, 3.3) << endl;
    return 0;
}
// jadi fungsi yang sama dengan nama yang sama bisa di gunakan untuk berbagai macam tipe data