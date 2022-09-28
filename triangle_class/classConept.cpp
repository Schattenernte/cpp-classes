#include "Triangle.hpp"

int main()
{
    float a, b, c;
    cout << "Please enter the sied (a-b-c)" << endl;
    cin >> a >> b >> c;
    Triangle triangle1(a,b,c); // constructor
    Triangle triangle2(triangle1); // copy constructor
    Triangle triangle3(triangle1); // copy constuctor

    cout << "Triangle 1" << endl;
    cout << "Side A:" << triangle1.getsideA() << endl;
    cout << "Side B:" << triangle1.getsideB() << endl;
    cout << "Side C:" << triangle1.getsideC() << endl;

    triangle2.setValue(12, 16, 20); // set fonksiyonu
    cout << "Side A:" << triangle2.getsideA() << endl;
    cout << "Side B:" << triangle2.getsideB() << endl;
    cout << "Side C:" << triangle2.getsideC() << endl;

    triangle1.triangleType();
    triangle2.triangleType();
}