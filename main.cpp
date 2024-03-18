#include <iostream>
#include <iomanip>
#include "./library/point/point.h"
#include "./library/circle/circle.h"
#include "./library2/req/req.h"
#include "./library/squa/squa.h"
#include "./library/linkedList/linkedList.h"
#include <cstring>

#define VERSION "1.0.2"
#define TAG "main"
using namespace std;

struct Example {
    uint8_t a;
    uint8_t b;
    uint32_t c;
};

uint8_t arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

int main() {
    char str[] = "abcdefgh";
    memmove(str + 4, str + 2, 4); // Di chuyển "cdef" tới vị trí sau "ab"
    std::cout << "Result: " << str << std::endl;
    return 0;
}