#include <iostream>
using namespace std;

int main(){
  int i = 1;
  int total = 0;
  while (i <= 200){
    total = total + i;
    i = i + 1;
  }
  cout<<total;
}