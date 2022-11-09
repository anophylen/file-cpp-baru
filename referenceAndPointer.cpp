#include <bits/stdc++.h>
using namespace std;

void Pointer();
void Reference();
 
int main()
{
    Pointer();
    cout<<endl;
    Reference();
    return 0;
}

void Pointer(){
    int a = 5;
    int *aPtr = nullptr; // membuat alamat kosong
    aPtr = &a;

    cout<<"Nilai a: "<<a<<endl;
    cout<<"Alamat a: "<<&a<<endl;

    a = 10;
    cout<<"Mengambil nilai dari pointer aPtr : "<< *aPtr<<endl;
}

void Reference(){
    int a = 10;
    int &b = a;
    cout << "Nilai a: " << a << endl;
    cout << "Alamat a: " << &a << endl;
    cout << "Nilai b: " << b << endl;
    cout << "Alamat b: " << &b << endl;
}
//jadi simplenya reference apabila nilai dari variabel yang di referensikan diubah maka nilai dari variabel yang mereferensikan juga akan berubah karena alamat memori yang sama