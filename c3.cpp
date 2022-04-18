#include <bits/stdc++.h>
using namespace std;

int main () {
    int h,x,y;
    cin >> h;
    for (int i = 1; i <= h; i++) {
        for (int j = h-i; j >= 0 ; j--) {
            cout << " " << " ";
        }
        for (x = 0; x < i-1; x++) {
            cout << "*" << " ";
        }
        cout << "*" << " ";
        for ( y = 0; y < i-1; y++) { 
            cout << "*" << " ";
        }
        cout<< endl;
    }
}