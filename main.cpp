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

#include <cstring>

int main() {
    char str[] = "Hello, world!";
    char buffer[20];

    // Sao chép dữ liệu từ str đến buffer (chồng địa chỉ)
    // Bạn có thể thấy chồng địa chỉ ở đây
    memmove(str + 3, str, strlen(str) + 1);

    std::cout << "Sau khi sao chép: " << str << std::endl;

    return 0;
}