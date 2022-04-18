#include<bits/stdc++.h>
using namespace std;

bool a(int x){
    if( x < 2) return false;
   for(int i = 2; i < x;i++)
        if(x % i == 0) 
            return false;
    return true;
}
int main () {
    int x;
    cin >> x;
    if(a(x) == false) {
        cout << x << " khong phai so nguyen to";
    } else {
        cout << x << " là so nguyen to";
    }
}