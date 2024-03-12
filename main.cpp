#include <iostream>
#include <iomanip>
#include "./library/point/point.h"
#include "./library/circle/circle.h"
#include "./library2/req/req.h"
#include "./library/squa/squa.h"

#define VERSION "1.0.2"
#define TAG "main"
using namespace std;

int main(){
    cout << "Hello winDev:" << endl;
    cout << string(VERSION) << endl;
    point *P_Ptr, P(3.5, 5.3);
    circle *C_Ptr, C(5.5, 4, 7.7);

    cout << "Thanh draw------------------------->" << endl;
    cout <<"Point = "<< P << endl;
    cout << C << endl;
    cout << "Thanh draw------------------------->" << endl;

    P_Ptr = &C;
    C_Ptr = dynamic_cast<circle *>(P_Ptr);

    int *a = new int;
    cout << "thanh: " << a << endl;
    delete a;

    return 0;
}