#include<iostream>
using namespace std;

void e(){
    cout<<endl;
}
void input(int a, int b){
    cout << "\nMasukkan nilai a: ";
    cin >> a;
    cout << "\nMasukkan nilai b: ";
    cin >> b;
}
int tambah(int a, int b){
    return a+b;
}

int main(){
    e();
    return 0;
}