#include <iostream>
using namespace std;

int main() {

int a;
cout << "Введіть число" << endl;
cin >> a;

bool* b = new bool;

if(a > 0) {
    *b = true;
} else {
    *b = false;
}

cout << *b << endl;

}
