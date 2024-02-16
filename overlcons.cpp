#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    int u, r, e;
    cout << "Enter dimensions of complex vectors\n";
    cin >> e >> r;
    Complex c1(e, r);
    c1.printNumber();
    cout << "Enter x-axis of complex\n";
    cin >> u;
    Complex c2(u);
    c2.printNumber();
    cout << "Dimensionless complex\n";
    Complex c3;
    c3.printNumber();
    return 0;
}
