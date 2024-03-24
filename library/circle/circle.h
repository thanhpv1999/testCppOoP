#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include "../point/point.h"

using namespace std;

class circle : public point
{
    private:

    protected:
        float radius;
        
    public:
        circle(float r=0, float a=0, float b=0);
        void SetRadius(float r);
        float GetRadius(void) const;
        friend ostream & operator <<(ostream &Out, const circle &c);
        ~circle();
};

#endif