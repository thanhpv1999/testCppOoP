#include <iostream>
#include <iomanip>
#include "./library/point/point.h"
#include "./library/circle/circle.h"
#include "./library2/req/req.h"
#include "./library/squa/squa.h"
#include "./library/linkedList/linkedList.h"

#define VERSION "1.0.2"
#define TAG "main"
using namespace std;

struct Example {
    uint32_t d;
    uint16_t b;
    uint16_t c;
    uint8_t a;
};

uint8_t arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

int main(){
    cout << "Hello winDev:" << endl;

    Example ex;
    cout << "Kich thuoc cua struct Example: " << sizeof(ex) << " byte" << endl;
    // // In ra địa chỉ của các thành viên của struct
    // cout << "Dia chi cua bien a: " << (void*)&ex.a << endl;
    // cout << "Dia chi cua bien b: " << (void*)&ex.c << endl;
    // cout << "Dia chi cua bien c: " << (void*)&ex.b << endl;

    Example *p_set = (Example *)(&arr[0]);
    cout << "Dia chi cua bien a: " << hex << setw(2) << p_set->a << endl;
    cout << "Dia chi cua bien b: " << hex << setw(4) << p_set->b << endl;
    cout << "Dia chi cua bien c: " << hex << setw(4) << p_set->c << endl;
    cout << "Dia chi cua bien c: " << hex << setw(8) << p_set->d << endl;

    printf("%x-%x-%x-%x\n", p_set->a, p_set->b, p_set->c, p_set->d);

    return 0;
}