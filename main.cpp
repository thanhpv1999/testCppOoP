#include <iostream>
#include <iomanip>
#include <thread>
#include <cstring>
#include "./library/point/point.h"
#include "./library/circle/circle.h"
#include "./library2/req/req.h"
#include "./library/squa/squa.h"
#include "./library/linkedList/linkedList.h"
#include "./library/checkPoint/checkPoint.h"

int main() {

    checkPoint *xetDiem = new checkPoint(1,2,3,4,5,6);
    xetDiem->checkLine();
    xetDiem->midpointAndBetween();
    cout << "dien tich: " << xetDiem->areaTri() << endl;

    return 0;
}