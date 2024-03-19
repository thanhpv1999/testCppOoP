// #include <iostream>
// #include <iomanip>
// #include <thread>
// #include "./library/point/point.h"
// #include "./library/circle/circle.h"
// #include "./library2/req/req.h"
// #include "./library/squa/squa.h"
// #include "./library/linkedList/linkedList.h"

// #define VERSION "1.0.2"
// #define TAG "main"
// using namespace std;

// struct Example {
//     uint32_t d;
//     uint16_t b;
//     uint16_t c;
//     uint8_t a;
// };

// uint8_t arr[12] = {0,1,2,3,4,5,6,7,8,9,10,11};

// #include <cstring>

// // int main() {

// //     thread myThread([](){
// //         cout << "thanh" << endl;
// //     });

// //     return 0;
// // }

// #include <iostream>

// class MyClass {
// public:
//     void doSomething() const {
//         std::cout << "Doing something!" << std::endl;
//     }

//     void test(){
//         std::cout << "thanh" << std::endl;
//     }

//     static void thanhTest(){
        
//     }
// };

// int main() {
//     const MyClass obj;
//     obj.doSomething(); // Gọi phương thức const từ một đối tượng const
//     //obj.test();
//     return 0;
// }

#include <iostream>
#include <thread>
#include <vector>

// Hàm này tính tổng của một phần của mảng
void partial_sum(const std::vector<int>& vec, int start, int end, int* result) {
    int sum = 0;
    for (int i = start; i < end; ++i) {
        sum += vec[i];
        if(start == 0) {std::cout << "dau" << std::endl;}
        else {std::cout << "sau" << std::endl;}
    }
    *result = sum;
}

class main
{
public:
    main(int x){
        std::cout << "main" << std::endl;
    }

    ~main(){
        std::cout << "huy main" << std::endl;
    }
};

class thanh : public main
{
public:
    thanh(int x):main(x){
        std::cout << "thanh" << std::endl;
    }

    ~thanh(){
        std::cout << "huy thanh" << std::endl;
    }
};

class van : public main
{
public:
    van(int x):main(x){
        std::cout << "van" << std::endl;
    }
};

class pham : public thanh, public van
{
public:
    pham(int x):thanh(x), van(x){
        std::cout << "pham" << std::endl;
    }
};

int main() {
    // const int size = 1000; // Giả sử mảng có 1000 phần tử
    // std::vector<int> vec(size, 1); // Khởi tạo mảng với các giá trị là 1

    // int result1, result2; // Kết quả từng phần

    // // Chia mảng thành 2 phần và tính tổng song song
    // std::thread t1(partial_sum, std::ref(vec), 0, size/2, &result1);
    // std::thread t2(partial_sum, std::ref(vec), size/2, size, &result2);

    // // Đợi các thread hoàn thành
    // t1.join();
    // t2.join();

    // // Kết hợp kết quả
    // int total_sum = result1 + result2;

    // std::cout << "Total sum is " << total_sum << std::endl;

    // pham dt1(5);
    thanh t1(5);

    return 0;
}
