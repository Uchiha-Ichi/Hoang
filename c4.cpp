#include<bits/stdc++.h>
using namespace std;
double a(int n){
    if(n==0) return 0;
    return (double) sqrt(2 +a(n-1));
}

int main() {
    int n;
    cin >> n;
    cout << "S(n) = " << a(n);
}