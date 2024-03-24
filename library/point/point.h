#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class point
{
    private:
        int m; 
        
    protected:
        float x,y;
        
    public:
        point(float a=0, float b=0);
        void SetPoint(float a, float b);
        float GetX(void) const;
        float GetY(void) const;
        friend ostream & operator <<(ostream &Out, const point &p);
        ~point();
};

#endif