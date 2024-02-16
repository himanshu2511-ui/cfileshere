#include <iostream>
#include<cmath>
using namespace std;
class Person
{
public:
    int a, b;
    Person(int feet, int inches)
    {
        feet = a;
        inches = b;
    }
    void show(Person obj1, Person obj2)
    {
        cout << "The height of 1st person is " << obj1.a<< "' " << obj1.b << "'' " << endl;
        cout << "The height of 2nd person is " << obj2.a << "' " << obj2.b << "'' " << endl;
        int m, n;
        m = abs(obj1.a - obj2.a);
        n = abs(obj1.b - obj2.b);
        cout << "The difference in height is " << m << "' " << n << "'' ";
    }
    Person(){}
};
int main()
{
    Person obj11;
    Person obj22;
    cout << "Enter the height in feet and inches for 1st person : \n";
    cin >> obj11.a >> obj11.b;
    cout << "Enter the height in feet and inches for 2nd person : \n";
    cin >> obj22.a >> obj22.b;
    obj11.show(obj11, obj22);
    return 0;
}

//https://www.codecademy.com/resources/docs/cpp/math-functions