#include <iostream> //preprocessor directive
using namespace std;

class kashyap
{
public:
    int sum(int a, int b)
    {
        return a + b;
    }
    int div(int a, int b)
    {
        return a / b;
    }
    int mul(int a, int b)
    {
        return a * b;
    }
    int subs(int a, int b)
    {
        return a - b;
    }
};
int main()
{
    cout << "enter 2 numbers to perform algebraic operations\n";
    int x, y;
    cin >> x;
    cin >> y;
    kashyap m;
    cout << "their sum is:\n";
    cout << m.sum(x, y) << endl;
    cout << "their ratio is:\n";
    cout << m.div(x, y) << endl;
    cout << "their product is:\n";
    cout << m.mul(x, y) << endl;
    cout << "their diference is:\n";
    cout << m.subs(x, y);
    return 0;
}