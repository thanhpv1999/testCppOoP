#ifndef SQUA_H
#define SQUA_H

#include "../point/point.h"

class squa : private point
{
private:
    int n=0;
public:
    squa(/* args */);
    ~squa();
    void getBaseClass(void);

protected:
 int k=1;
};

#endif