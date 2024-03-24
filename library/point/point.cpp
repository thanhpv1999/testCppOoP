#include "point.h"

point::point(float a, float b)
{
    cout << "create point: " << a << " : " << b << endl;
    point::SetPoint(a,b);
}

point::~point()
{
    cout << "delete point" << endl;
}

void point::SetPoint(float a, float b)
{
    this->x = a;
    this->y = b;
}

float point::GetX(void) const
{
    return this->x;
}

float point::GetY(void) const
{
    return this->y;
}

ostream & operator <<(ostream &Out, const point &p)
{
    Out << '[' << p.x << ", " << p.y << ']';
    return Out;
}