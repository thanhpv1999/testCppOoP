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

enum mau {
    xanh,
    thanh,
    vang
};

int main() {

    checkPoint *xetDiem = new checkPoint(1,2,3,4,5,6);
    xetDiem->checkLine();
    xetDiem->midpointAndBetween();
    cout << "dien tich: " << xetDiem->areaTri() << endl;

    cout << "t1: " << sizeof(mau) << endl;
    cout << "t2: " << xanh <<" "<<thanh << endl;

    mau t, m;
    t= xanh;
    m= mau(10);
    cout << "t3: " << t << endl;
    cout << "t4: " << m << endl;

    return 0;
}