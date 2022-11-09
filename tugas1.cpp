#include <iostream>
using namespace std;

int max(int A, int B){
    if (A > B){
        return A;
    } else {
        return B;
    }
}

int max3(int A, int B, int C){
    return max(max(A, B), C);
}

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    cout <<"Nilai maksimum adalah "<<max3(a, b, c) << endl;
    return 0;
}