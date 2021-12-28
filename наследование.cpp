// наследование.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Tochka {
public:
    int x;
    int y;

    Tochka() {
        x = 0;
        y = 0;
    }

    Tochka(int x, int y) {
        x = x;
        y = y;
    }

    ~Tochka() {

    }
};

class Func : public Tochka {
public:
    void F(int a, int b, int c) {
        for (x = -10; x < 11; x++) {
            y = a * pow(x, 2) + b * x + c;
            cout << "Znachenie y pri x = " << x << ": " << y << endl;
        }
    }
};

int main()
{
    int a, b, c; Func function;
    cin >> a >> b >> c;
    if ((!a) | (!b) | (!c)) {
        cout << "Vvedeno nevernoe znacheniya. " << "/n";
        return 1;
    }
    else {
        cout << "y = (" << a << ")*x*x + (" << b << ")*x + (" << c << ")" << endl;
        function.F(a, b, c);
    }
    return 0;
}