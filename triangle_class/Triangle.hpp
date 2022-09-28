#include <iostream>
#include <string>
using namespace std;

class Triangle
{
    public:
    float sideA, sideB, sideC;
    Triangle(float a, float b, float c);
    bool isTriangle(float a, float b, float c);
    ~Triangle();
    Triangle(const Triangle &oth);
    float   getsideA() const {return sideA;}
    float   getsideB() const {return sideB;}
    float   getsideC() const {return sideC;}
    void    setValue(float a, float b, float c);
    bool    isEquilateral();
    bool    isScalene();
    bool    isIsosceles();
    void    triangleType();
    float   calculateArea();
};

void    Triangle::setValue(float a, float b, float c)
{
    sideA = a;
    sideB = b;
    sideC = c;
}

Triangle::Triangle(float a, float b, float c)
{
    // üçgen oluşana kadar tekrardan 3 kenar isteyeceğiz.

    while (!isTriangle(a, b, c))
    {
        cout << "Please enter the sides (A - B - C)" << endl;
        cin >> a >> b >> c;
    }
    sideA = a;
    sideB = b;
    sideC = c;
    cout << "Triangle Created. " << endl;
}

bool    Triangle::isTriangle(float a, float b, float c)
{
    // side A: |b - c| < a < b + c
    // side B: |a - c| < b < a + c
    // side C: |a - b| < c < a + b

    if(!(abs(b - c) < a && (a < b + c))) //? başında ünlem olduğu için eğer bu if koşulu sağlanmıyorsa false dönecek.
        return false;
    if(!(abs(a - c) < b && (b < a + c)))
        return false;
    if (!(abs(a - b) < c && (c < a + b)))
        return false;
    return true;
}

Triangle::Triangle(const Triangle &oth)
{
    sideA = oth.sideA;
    sideB = oth.sideB;
    sideC = oth.sideC;
    cout << "Triangle Copied to target" << endl;
}

Triangle::~Triangle()
{
    cout << "Triangle Destroyed" << endl;
}

bool    Triangle::isEquilateral()
{
    return sideA == sideB && sideC == sideB;
}

bool    Triangle::isIsosceles()
{
    if (isEquilateral())
        return true;
    return sideA == sideB || sideB == sideC || sideA == sideC;
}

bool    Triangle::isScalene()
{
    return !isEquilateral();
}

void    Triangle::triangleType()
{
    if (isEquilateral())
        cout << "Equilateral Triangle" << endl;
    else if (isIsosceles())
        cout << "Isosceles Triangle" << endl;
    else
        cout << "Scalene Triangle" << endl;
}