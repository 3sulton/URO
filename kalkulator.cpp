#include <iostream>
using namespace std;

float fx(float x) {
    return x*x;
}

int main() {
    float a,b,c;
    double d = 1;
    char s;
    int pilih;
    cout << "PILIH MODE KALKULATOR\n[1] Mode Biasa\n[2] Hitung Integral x^2" << endl;
    cin >> pilih;
    if (pilih == 1) {
        cout << "MASUKKAN 2 BILANGAN DENGAN 1 OPERATOR CONTOH 2+2" << endl;
        cin >> a >> s >> c;
        if (s == '+') {
            cout << "= " << a + c;
        } else if (s == '-') {
            cout << "= " << a - c;
        } else if (s == '*') {
            cout << "= " << a * c;
        } else if (s == '/') {
            cout << "= " << a / c;
        } else if (s == '^') {
            for(int i = 1; i<=c; i++) {
                d *= a;
            }
            cout << "= " << d;
        }
    }  else if (pilih == 2) { // misalakan fungsi yang akan dihitung integralnya adalah x^2
        cout << "MASUKKAN NILAI BATAS BAWAH, ATAS, DAN JUMLAH PARTISI: " << endl;
        cin >> b >> a >> c;
        float p = (a-b)/c;
        float x = b + p;
        float jumlah = 0;
        float f0 = fx(b);
        float fn = fx(a);
        while (x<a) {
            jumlah += fx(x);
            x+=p;
        }
        cout << "INTEGRAL " << b << " .. " << a << " x^2 dx = " << 0.5*p*(f0+fn+(2*jumlah));
    } else {
        cout << "MASUKAN SALAH" << endl;
    }
}