#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    int sum = 0;
    cin >> n;
    
    if (n <= 0) {
        cout << "Error";
    } else {
        for (int i = 2; i <= n; i++) {
            if(n % i == 0 && i % 2 == 0) {
                sum =sum + i;
            }
        }
        cout << sum;
    }
}