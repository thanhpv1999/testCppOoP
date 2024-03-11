#ifndef REQ_H
#define REQ_H

#include <iostream>
#include "../../library/point/point.h"

using namespace std;

class req : public point
{
    private:

    protected:
        float x,y;
        
    public:
        req(float a=0, float b=0);
        void Setreq(float a, float b);
        float reqX(void) const;
        float reqY(void) const;
        ~req();
};

#endif