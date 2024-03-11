#include <iomanip>
#include "circle.h"

circle::circle(float r, float a, float b) : point(a, b)
{
    cout << "create circle: " << r << endl;
    circle::SetRadius(r);
}

circle::~circle()
{
    cout << "delete circle" << endl;
}

void circle::SetRadius(float r)
{
    this->radius = r;
}

float circle::GetRadius(void) const
{
    return this->radius;
}

ostream & operator <<(ostream &Out, const circle &c)
{
    Out << "Center = [" << c.x << ", " << c.y 
    << "]; Radius = " << setiosflags(ios::showpoint) 
    << setprecision(2) << c.radius; 
    return Out; 
}