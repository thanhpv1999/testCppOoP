#ifndef CHECKPOINT_H
#define CHECKPOINT_H

#include "../point/point.h"

class checkPoint
{
private:
    point *listPoint[3];
    
protected:

public:
    checkPoint(float a1, float b1, float a2, float b2, float a3, float b3);
    ~checkPoint();
    bool checkDuplicate(void) const;
    bool checkLine(void) const;
    float areaTri(void) const;
    void midpointAndBetween(void) const;
};

#endif