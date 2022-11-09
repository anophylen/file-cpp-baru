#include <iostream>

using namespace std;

int main()
{
    int bilangan, angkaGenap, jumlah = 0, jumlahGenap = 0;

    for (int i = 1; i <= 20; i++)
    {
        cin >> bilangan;

        if (bilangan %2 == 0 && i <= 8)
        {
            jumlah = jumlah + bilangan;
            jumlahGenap++;
        }
    }


    for (int i = 1; i <= 4; i++)
    {
        angkaGenap += 2;
        if (i == 4)
        {
            cout << angkaGenap << " = ";
        }
        else
        {
            cout << angkaGenap << " + ";
        }
    }

    cout << jumlah;
    return 0;
}

