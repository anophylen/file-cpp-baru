#include <iostream>
using namespace std;

float kalkulator(float a, float b, char c){
    if (c == '+'){
        return a + b;
    } else if (c == '-'){
        return a - b;
    } else if (c == '*'){
        return a * b;
    } else if (c == '/'){
        return a / b;
    } else {
        return 0;
    }
}

int main(){
    float a, b;
    char c;
    cout<<"Masukkan nilai 1: ";
    cin >> a;
    cout<<"Masukkan operasi aritmatika: ";
    cin >> c;
    cout<<"Masukkan nilai 2: ";
    cin >> b;
    cout << kalkulator(a, b, c) << endl;

    return 0;
}