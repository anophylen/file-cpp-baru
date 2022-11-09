#include<iostream>

using namespace std;

int main() {
    int bilanganGenap[10], total = 0;;
    int counter = 0;
    for (int i = 0; i < 20; i++) {
        int temp;
        cin >> temp;
        if((i <= 8) && (temp % 2 == 0)) {
            bilanganGenap[counter] = temp;
            bilanganGenap[counter+1] = 0;
            counter++;
        }
    }

    for(int i = 0; bilanganGenap[i] != 0; i++) {
        total += bilanganGenap[i];
        if(i != 0) {
            cout << "+";
        }
        cout << bilanganGenap[i];
    }

    cout << "=" << total;

    return 0;
}