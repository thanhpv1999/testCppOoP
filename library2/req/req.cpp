#include "req.h"

req::req(float a, float b)
: point(a,b)
{
    cout << "create req: " << a << " : " << b << endl;
    req::Setreq(a,b);
}

req::~req()
{
    cout << "delete req" << endl;
}

void req::Setreq(float a, float b)
{
    this->x = a;
    this->y = b;
}

float req::reqX(void) const
{
    return this->x;
}

float req::reqY(void) const
{
    return this->y;
}