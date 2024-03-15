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
    char a;
    int b;
    char c;
};

uint8_t arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

int main(){
    cout << "Hello winDev:" << endl;

    Example ex;
    // cout << "Kich thuoc cua struct Example: " << sizeof(ex) << " byte" << endl;
    // // In ra địa chỉ của các thành viên của struct
    // cout << "Dia chi cua bien a: " << (void*)&ex.a << endl;
    // cout << "Dia chi cua bien b: " << (void*)&ex.c << endl;
    // cout << "Dia chi cua bien c: " << (void*)&ex.b << endl;

    Example *temp = (Example *)&arr;
    cout << "Dia chi cua bien a: " << temp->a << endl;
    cout << "Dia chi cua bien b: " << temp->b << endl;
    cout << "Dia chi cua bien c: " << temp->c << endl;

    return 0;
}