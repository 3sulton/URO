#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i<n; i++) {
        cin >> a[i];
    }
    for(int i = 0; i<n; i++) {
        if (a[i]%400 == 0 || (a[i]%4 == 0 && a[i]%100 != 0)) {
            cout << "Leap Year" << endl;
        } else {
            cout << "Not a Leap Year" << endl;
        }
    }
}